// ColorDetection

#include <ctime>
#include <iostream>
#include <raspicam/raspicam_cv.h>
#include "opencv2/opencv.hpp"
#include <opencv2/core.hpp>
#include "HSVrange.hpp"
#include "average_calc.h"
#include <string>

using namespace std; 
using namespace cv;

enum Color { white, black, yellow, green, blue, red}; // assign a number to color

static int sq_size = 5; // length of square area, bigger = more pixels to sample

// Top left corner points of facelets
// Facelets are in top left to btm right order
// 0 - 1 - 2
// 3 - 4 - 5
// 6 - 7 - 8
Point UDFBLR_facelets[6][9] = {
	// U- top camera
	{	Point(477, 142), Point(402,200), Point(314,271),
		Point(393,87), Point(315,129), Point(230,190),
		Point(288,28), Point(235,80), Point(155,133) },
	// D - bottom camera
	{	Point(338,263), Point(258,178), Point(182,104),
		Point(430,195), Point(358,130), Point(280,57),
		Point(518,142), Point(436,76), Point(326,8) },
	// F - bottom camera
	{	Point(285,412), Point(242,364), Point(171,272),
		Point(290,381), Point(220,304), Point(168,231),
		Point(298,324), Point(222,242), Point(152,158) },
	// B - top camera
	{	Point(472,304), Point(395,374), Point(334,428),
		Point(478,263), Point(425,327), Point(340,384),
		Point(500,200), Point(430,260), Point(350,331) },
	// L - bottom camera
	{	Point(505,305), Point(415,377), Point(351,420),
		Point(519,263), Point(448,327), Point(364,382),
		Point(550,206), Point(464,261), Point(368,336) },
	// R - top camera
	{	Point(138,182), Point(194,246), Point(270,322),
		Point(148,240), Point(200,300), Point(275,371),
		Point(163,287), Point(226,358), Point(273,405) }
	/*
	{	Point(50,200), Point(118,264), Point(202,344),
		Point(85,274), Point(142,326), Point(207,394),
		Point(100,320), Point(155,370), Point(214,437) }
	*/
};

		
// Function declaration

string ImageToFacelets(Mat& I, Mat& I_display, int face);
char ScanImageAndColor(Mat& I, Mat& I_display, Point start);
char ColorDetection(int H, int S, int V);
string ColortoString(int color);


// input: Matices of top or btm image (HSV) and Mat of display (frame)
// output: Rubiks cube as string array in order U D F B L R
string FaceletToFaces(Mat& I, Mat& I_display, int face){
	string output;
	switch(face){
		case 0:	
		// output = function(compute U);
			output = "U:" + ImageToFacelets(I, I_display, face);
			output[6] = 'R'; // center facelet 
			break;
		case 1:
			output = "D:" + ImageToFacelets(I, I_display, face);
			output[6] = 'O';
			break;
		case 2:
			output = "F:" + ImageToFacelets(I, I_display, face);
			output[6] = 'W';
			break;
		case 3:
			output = "B:" + ImageToFacelets(I, I_display, face);
			output[6] = 'Y';
			break;
		case 4:
			output = "L:" + ImageToFacelets(I, I_display, face);
			output[6] = 'B';
			break;
		case 5:
			output = "R:" + ImageToFacelets(I, I_display, face);
			output[6] = 'G';
			break;
	}	
	return output;
}

// input Matrices and face (U = 1, D = 2... UDFBLR)
// output: string of 9 facelet colors
string ImageToFacelets(Mat& I, Mat& I_display, int face){
	Point start;
	string facelets = "";
	for(int i = 0; i < 9; ++i){
		start = UDFBLR_facelets[face][i]; // take region of interest
		facelets += ScanImageAndColor(I,I_display, start); // form char into string
	} 	
	return facelets;
}
// scans pixel HSV values then calculate the mean and stddev
// input: Mat (image in HSV), select: 0 = top, 1 = btm

char ScanImageAndColor(Mat& I, Mat& I_display, Point start)
{	
	Mat_<Vec3b> _I = I; //make another copy
	Vec3b pixel;
	int n = 0;
	int array_size = sq_size*sq_size; // area of square
	int h[array_size], s[array_size], v[array_size];
	
	for(int i = start.x; i < start.x + sq_size; ++i){
		for(int j = start.y; j < start.y + sq_size; ++j){
			pixel = _I.at<Vec3b>(j,i); // (y,x) format
			h[n] = pixel[0];
			s[n] = pixel[1];
			v[n] = pixel[2];
			n++;
		}
	}
	// sort arrays
	sort(h, h + array_size);
	sort(s, s + array_size);
	sort(v, v + array_size);
	
	// take median and determine color
	int h_median = h[array_size/2];
	int s_median = s[array_size/2];
	int v_median = v[array_size/2];
	//cout << "H = " << h_median << ", S = " << s_median << ", V = " << v_median << endl;
	char color = ColorDetection(h_median, s_median, v_median);
	
	// display rectangle on screen
	rectangle(I_display, Rect(start.x, start.y, sq_size, sq_size), Scalar(0,0,0), 2);// draw rectangle over area
	
	/*
	struct Output hOutput = calculateSD(h,array_size);
	struct Output sOutput = calculateSD(s,array_size);
	struct Output vOutput = calculateSD(v,array_size);	
	// debug
	cout << "H = " << hOutput.mean << ", S = " << sOutput.mean << ", V = " << vOutput.mean << endl;
	char color = ColorDetection(hOutput.mean, sOutput.mean, vOutput.mean);
	*/
	
	return color;
}

//Take the mean HSV of the region and determine its Color
char ColorDetection(int H, int S, int V){
	char color;
	if(S < HSV_S){
		/*
		if(V < HSV_V)
			color = 'B';
		else
		*/ 
		color = 'W';
	} 
	else{
		if(H >= HSV_H_OY && H < HSV_H_YG)
			color = 'Y';
		else if(H >= HSV_H_YG && H < HSV_H_GB)
			color = 'G'; 
		else if(H >= HSV_H_GB && H < HSV_H_BR)
			color = 'B';
		else if(H >= HSV_H_RO && H < HSV_H_OY)
			color = 'O';
		else 
			color = 'R';
	}
	//cout << "H = " << H << ", S = " << S << ", V = " << V << endl;//test colors
	//cout << color << endl;
	return color;
}

// converts enum Color back into string and cout for debugging
/*
string ColortoString(int color){
	string output = "error";
	switch(color){
		case white:
			output = "white";
			break;
		case black:
			output = "black";
			break;
		case yellow:
			output = "yellow";
			break;
		case green:
			output = "green";
			break;
		case blue:
			output = "blue";
			break;
		case red:
			output = "red";
			break;
		// include orange and include catches
	}
	cout << "Your Color is " << output << "   "<< endl;
	return output;
}
*/

/*
// input: image and polygon's 4 vertices
// output: color in enum format (might do char later)
int ScanImageAndColorTest(Mat& I){//, Point* ptss){
	int npoints = 4;
	
	//Mat _I = I; // make another copy
	
	Point pts[1][4];
	pts[0][0] = Point(170,170);
	pts[0][1] = Point(190,170);
	pts[0][2] = Point(190,190);
	pts[0][3] = Point(170,190);
	
	const Point* points[1] = {pts[0]};
	
	
	// Create mask over polygon
	Mat mask(I.rows, I.cols, uchar(0));
	//Mat mask = Mat::zeros(I.rows, I.cols,I.type());
	//Mat mask = Mat::zeros(1, 49, CV_64FC1);
	//rectangle(mask,Rect(170,170,20,20),Scalar(255,255,255),-1);
	fillPoly(mask, points, &npoints, 1, Scalar(255)); // 
	
	// Compute mean over mask
	Scalar average = mean(I, mask);
	cout << average << endl;
	
	return 0;
}
*/

