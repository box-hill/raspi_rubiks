//
//  Vector.cpp
//  Rubiks Cube Solving algorithm
//  Referenced from various research sources
//  Based on Herbert Kociemba's algorithm

#include <cstring>		// For memcpy()
#include <iostream>

#include "Vector.hpp"

using namespace std;

// Vector manipulation routines

// CopyVector - Clone a vector
void CopyVector(int *fromVector, int *toVector, int n) {
    memcpy(toVector, fromVector, n * sizeof(int));
}

// PrintVector - Print the contents of the vector
void PrintVector(int *vector, int n) {
    for(int i = 0; i < n; i++)
        cout << vector[i] << " ";
    cout << endl;
}

