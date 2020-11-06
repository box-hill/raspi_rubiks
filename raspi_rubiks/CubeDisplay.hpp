// CubeDisplay.hpp
// display facelet colors obtained from camera

static int x = 15;
static int y = 100; // co-ordinates of top left corner L-face in frame

static int size = 25; // pixel length of one facelet
static int gap = 10; // gap between cube faces
static int length = 3*size; // pixel length of one face
static int t = 1; // thickness
static int fillsize = 25 - t; 

Point L_face = Point(x,y);
Point F_face = Point(x + length + gap, y);
Point R_face = Point(x + 2*length + 2*gap, y);
Point B_face = Point(x + 3*length + 3*gap, y);
Point U_face = Point(x + length + gap, y - length - gap);
Point D_face = Point(x + length + gap, y + length + gap);

// arrange into input order
Point corners[6] = {U_face, D_face, F_face, B_face, L_face, R_face};

/*
 * Compute vertices here and store in array? or as points idk
 * Array of points!!
*/

Scalar BGR_black = Scalar(0,0,0);
Scalar BGR_white = Scalar(255,255,255);
Scalar BGR_red = Scalar(0,0,255);
Scalar BGR_green = Scalar(0,255,0);
Scalar BGR_yellow = Scalar(0,255,255);
Scalar BGR_blue = Scalar(255,0,0);
Scalar BGR_orange = Scalar(0,128,255);

Scalar letterToScalar(char color);


void drawFaces(Mat& I){
	
	for(int i = 0; i < 6; i++){
		int end_x = corners[i].x + length;
		int end_y = corners[i].y + length;
		rectangle(I, Rect(corners[i].x, corners[i].y, length + 1, length + 1), black, t);
		line(I, {corners[i].x, corners[i].y + size}, {end_x, corners[i].y + size}, black, 1);
		line(I, {corners[i].x, corners[i].y + 2*size}, {end_x, corners[i].y + 2*size}, black, 1);
		line(I, {corners[i].x + size, corners[i].y}, {corners[i].x + size, end_y}, black, 1);
		line(I, {corners[i].x + 2*size, corners[i].y}, {corners[i].x + 2*size, end_y}, black, 1);
		
	}
	
}

//   U
// L F R B
//   D
// input: facelet string {"U:...", "D:..." F B L R}
void fillFacelet(Mat& I, string facelet[6]){
	Point start; 	
	for(int i = 0; i < 6; i++){
		start = corners[i];//Select face 
		
		string f = facelet[i]; // make copy 
		f.erase(0,2); // erase first 2 chars in string
		start = Point(start.x + 1, start.y + 1); // to avoid fill over borders
		
		// fill 9 facelets
		for(int j = 0; j < 3; j++){
			for(int k = 0; k < 3; k++){
				rectangle(I, Rect(start.x + k*size, start.y + j*size, fillsize, fillsize),letterToScalar(f.at(0)),-1);
				
				f.erase(0,1);				
			}
		}
	}
}

// input: char color, e.g "R" = red, "W" = white
// output: BGR Scalar format 
Scalar letterToScalar(char color){
	Scalar output;
	switch(color){
		case 'B':
			output = BGR_blue;
			break;
		case 'G':
			output = BGR_green;
			break;
		case 'O':
			output = BGR_orange;
			break;
		case 'R':
			output = BGR_red;
			break;
		case 'W':
			output = BGR_white;
			break;
		case 'Y':
			output = BGR_yellow;
			break;
		default:
			cout<< "Letter not specified in range of colors defined." << endl;
	}
	return output;
}
