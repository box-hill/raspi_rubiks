// CameraVertices.hpp
// Store the camera frame coordinates of the vertices of the rubiks cube

#include "opencv2/opencv.hpp"
#include <opencv2/core.hpp>

/* Outer Vertices
//		 B
//		/ \
//	   A   C
//	   |\ /|
//	   | D |
//	   E | F
//		\|/ 
//		 G
 */

// Top Camera 
#define TOP_A {2,156}
#define TOP_B {210,3} //point B cant be seen* 
#define TOP_C {456,120}
#define TOP_D {251,328}
#define TOP_E {70,324}
#define TOP_F {410,284}
#define TOP_G {261,466}

#define BTM_A {22,10}
#define BTM_B {272,1} //point B cant be seen* 
#define BTM_C {464,136}
#define BTM_D {213,332}
#define BTM_E {77,286}
#define BTM_F {431,305}
#define BTM_G {240,464}


void drawOuterEdge(Mat& I, int select){
	// select == 1 , Top camera view
	switch(select){
		case 1:
			line(I, TOP_A, TOP_B, Scalar(0,0,128), 2);
			line(I, TOP_B, TOP_C, Scalar(0,0,128), 2);
			line(I, TOP_C, TOP_D, Scalar(0,0,128), 2);
			line(I, TOP_D, TOP_A, Scalar(0,0,128), 2);
			
			line(I, TOP_D, TOP_G, Scalar(0,0,128), 2);
			
			line(I, TOP_A, TOP_E, Scalar(0,0,128), 2);
			line(I, TOP_C, TOP_F, Scalar(0,0,128), 2);
			line(I, TOP_G, TOP_E, Scalar(0,0,128), 2);
			line(I, TOP_G, TOP_F, Scalar(0,0,128), 2);
			break;
		case 2:
			line(I, BTM_A, BTM_B, Scalar(0,0,128), 2);
			line(I, BTM_B, BTM_C, Scalar(0,0,128), 2);
			line(I, BTM_C, BTM_D, Scalar(0,0,128), 2);
			line(I, BTM_D, BTM_A, Scalar(0,0,128), 2);
			
			line(I, BTM_D, BTM_G, Scalar(0,0,128), 3);
			
			line(I, BTM_A, BTM_E, Scalar(0,0,128), 3);
			line(I, BTM_C, BTM_F, Scalar(0,0,128), 3);
			line(I, BTM_G, BTM_E, Scalar(0,0,128), 3);
			line(I, BTM_G, BTM_F, Scalar(0,0,128), 3);
			break;
		
	}
	
}


