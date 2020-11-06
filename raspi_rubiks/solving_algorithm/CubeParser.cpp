//
//  CubeParser.cpp
//  Rubiks Cube Solving algorithm
//  Referenced from various research sources
//  Based on Herbert Kociemba's algorithm

#include <cstring>

#include "CubeParser.hpp"

CubeParser::CubeParser() {}

CubeParser::~CubeParser() {}

int CubeParser::parseFacelets(string faceletStrings[], FaceletCube &faceletCube) {
    int face;
    int faces[NUM_FACES]; // NUM_FACES is #define NUM_FACES 6 in Cube.hpp
    int status;

    // Set face counts to 0, for 6 faces
    for(int i = 0; i < NUM_FACES; i++) faces[i] = 0;

    // Loop through each face specifier
    for(int i = 0; i < NUM_FACES; i++) {
        // Parse each face
        if((status = parseFace(faceletCube, faceletStrings[i], face)) != VALID) // parseFace (defined below) just returns error msg
            return status;

        // Initialize this face in FaceletCube
        faceletCube.SetFaceMarkings(face, faceletStrings[i].substr(2));

        // Count this face
        faces[face]++;
    }

    // Each face specifier must be found exactly once
    for(int i = 0; i < NUM_FACES; i++) {
        if(faces[i] != 1)
            return INCOMPLETE_INPUT;
    }

    return VALID;
}

// Return the text associated with an error return code
int CubeParser::parseFace(FaceletCube &faceletCube, string faceString, int &face) { // note this function takes in &face, mainly used so we are able to pass NULL into our parameters
    int facelet;

    // Check specifier length f:mmmmmmmmm
    if(faceString.size() != 1+1+9) //it's 11 here because there are 9 facelets and 2 addition characters that define which face
        return SYNTAX_ERROR;

    // Validate face name (f)
    if((face = faceletCube.FaceNameToOffset(faceString[0])) < 0)
        return INVALID_FACE;

    // Parse the colon
    if(faceString[1] != ':')
        return SYNTAX_ERROR;

    // Check each facelet
    for(facelet = 0; facelet < 9; facelet++) {
        // Only printable characters are allowed
        if(faceString[2+facelet] <= ' ' || faceString[2+facelet] > '~')
            return SYNTAX_ERROR;
    }

    return VALID;
}

// Return the text associated with an error return code
string CubeParser::ErrorText(unsigned int error) {
    if (error >= NumberOfErrors) error = 0;
    return errorText[error];
}

string CubeParser::errorText[NumberOfErrors] = {
    "",
    "Invalid face specifier",
    "Invalid marker",
    "Incomplete input",
    "Syntax error"
};

