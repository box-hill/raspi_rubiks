#include <ctime>
#include <iostream>
#include <raspicam/raspicam_cv.h>
#include "opencv2/opencv.hpp"
#include <opencv2/core.hpp>
#include <stdio.h>
#include <string>
#include <wiringPi.h>
#include <wiringSerial.h>
#include <unistd.h>

#include "ColorDetection.hpp"
#include "CameraVertices.hpp"
#include "CubeDisplay.hpp"

#include "solving_algorithm/CubeParser.hpp"
#include "solving_algorithm/FaceletCube.hpp"
#include "solving_algorithm/RubiksCube.hpp"
#include "solving_algorithm/Solver.hpp"

using namespace std; 
using namespace cv;
static const char* portName = "/dev/ttyS0";

char solution_global[100];



int main ( int argc,char **argv ) {
   
	time_t timer_begin,timer_end;
	//-USB WEBCAM-//
	VideoCapture cap2; // top cam
	VideoCapture cap0; // btm cam
	
	cap2.open(0);
	cap0.open(2);
	
	Mat frame_top;
	Mat frame_btm;
	
	Mat rubiks_cube = Mat::zeros(280, 365, CV_8UC3 ); // Setup size
	rubiks_cube = Scalar(255,255,255); // Make window white
	drawFaces(rubiks_cube); //draw outline of facelets
	
	Mat img_top_hsv;
	Mat img_btm_hsv;
	//Mat image_thrs;

	//Start capture
	time ( &timer_begin );
	namedWindow("Top Camera", 1 );
	namedWindow("Bottom Camera", 1 );
	namedWindow("Rubiks Cube", 1);
	
	string facelets[6];
	
	unsigned int status; // Solver status    
 
	
	do {
		cap2.read(frame_top);
		cap0.read(frame_btm);
		
		// Convert from BGR to HSV colorspace
		cvtColor(frame_top, img_top_hsv, CV_BGR2HSV);
		cvtColor(frame_btm, img_btm_hsv, CV_BGR2HSV);
		
		// Detect the object based on HSV Range Values
		// openCV uses H: 0-179, S: 0-255, V: 0-255
			
	
		facelets[0] = FaceletToFaces(img_top_hsv,frame_top,0); // Scan U face
		facelets[1] = FaceletToFaces(img_btm_hsv,frame_btm,1); // Scan D face
		facelets[2] = FaceletToFaces(img_btm_hsv,frame_btm,2); // Scan F face ra
		facelets[3] = FaceletToFaces(img_top_hsv,frame_top,3); // Scan B face
		facelets[4] = FaceletToFaces(img_btm_hsv,frame_btm,4); // Scan L face
		facelets[5] = FaceletToFaces(img_top_hsv,frame_top,5); // Scan R face

		// Display detected colors on screen
		fillFacelet(rubiks_cube, facelets);
		
		// display video
		imshow("Top Camera", frame_top);
		imshow("Bottom Camera", frame_btm);
		
		// display rubiks cube layout
		imshow("Rubiks Cube", rubiks_cube);

		
	}while ( -1 == cvWaitKey(10) ); // pressing any key wil exit the loop
	cout<<"Stop camera..."<<endl;
	//Camera.release();
	//show time statistics
	time ( &timer_end ); /* get current time; same as: timer = time(NULL)  */
	double secondsElapsed = difftime ( timer_end,timer_begin );
	cout<< secondsElapsed<<" seconds elapsed" <<endl;
	
	// Initiate Solver
	// Parse the input and initialize FaceletCube
	FaceletCube faceletCube;
	CubeParser cubeParser;
	if((status = cubeParser.parseFacelets(facelets, faceletCube)) != CubeParser::VALID) {
	cout << cubeParser.ErrorText(status) << endl;
	return 1;
	}

	// Validate the FaceletCube
	RubiksCube cube;
	if((status = faceletCube.Validate(cube)) != FaceletCube::VALID) {
	cout << faceletCube.ErrorText(status) << endl;
	return 1;
	}
	// Cube is in a valid configuration at this point


	// Initialize tables and solve
	Solver solver;
	solver.InitializeTables();
	solver.Solve(cube);

	// Cube solved
	
	delay(100); //
	// Save solution
	
	char moveset_sample[100];
    string solution_string;
    ifstream myfile("solution.txt");
    getline(myfile, solution_string);
    cout << "solution to be sent is: " <<endl;
    cout << solution_string << endl;
    strcpy(moveset_sample, solution_string.c_str());
    
	
	// UART comms to PSOC
	wiringPiSetup ();
	int serialPort; // File descriptor for serial port

	// Open the serial port 
	serialPort = serialOpen(portName, 115200);
	printf ("%i\n",serialPort) ;

		
	int moveset_size = sizeof moveset_sample / sizeof *moveset_sample;
	for(int i=0; i<moveset_size; i++){
		char c = moveset_sample[i];
		if(c != ' '){
		serialPutchar(serialPort, c);
		delay(100);
		}
		
	}
	serialPutchar(serialPort, '+');

	cout << "solution sent" << endl;

	serialClose(serialPort);
	
	return 0;

}

