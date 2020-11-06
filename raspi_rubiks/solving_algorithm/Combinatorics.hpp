//
//  Combinatorics.hpp
//  Rubiks Cube Solving algorithm
//  Referenced from various research sources
//  Based on Herbert Kociemba's algorithm

#ifndef Combinatorics_hpp
#define Combinatorics_hpp

// Combinatorial algorithms

int NChooseM(int N, int M);
int PermutationToOrdinal(int *vector, int n);
void OrdinalToPermutation(int Ordinal, int* vector, int n, int offset);

#endif /* Combinatorics_hpp */
