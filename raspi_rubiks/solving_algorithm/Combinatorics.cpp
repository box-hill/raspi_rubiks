//
//  Combinatorics.cpp
//  Rubiks Cube Solving algorithm
//  Referenced from various research sources
//  Based on Herbert Kociemba's algorithm


#include "Combinatorics.hpp"

#include "Vector.hpp"	// Manipulating vectors


int NChooseM(int N, int M) {
    int NoverMfact = N;	// Iterates from N down to M+1 to
				//   compute N! / (N-M)!
    int Mfact = 1;		// Iterates from 1 to M to divide
				//   out the M! term
    int Result = 1;		// Holds the result of N choose M
    if (N < M) return 0;	// M must be a subset of M
    if (M > N/2) M = N-M;	// Optimization
    while (NoverMfact > M) {
        Result *= NoverMfact--;	// Work on the N! / (N-M)! part
        Result /= Mfact++;	// Divide out the M! part
    }
    return Result;
}


int PermutationToOrdinal(int *vector, int n) {
    int Ordinal = 0;
    int Vector[12];		// n <= 12
    int Limit;
    int i;
    int Coeff_i;
    int Temp;

    // Make a copy of the permutation vector
    CopyVector(vector, Vector, n);

    for (Limit = n-1; Limit > 0; Limit--) {
        // Find the maximum up to the current limit
        Temp = -1;
        for (i = 0; i <= Limit; i++) {
            if (Vector[i] > Temp) {
                Temp = Vector[i];
                Coeff_i = i;
            }
        }
        // Accumulate result
        Ordinal = Ordinal*(Limit+1)+Coeff_i;

        // Exchange elements
        Temp            = Vector[Limit];
        Vector[Limit]   = Vector[Coeff_i];
        Vector[Coeff_i] = Temp;
    }
    return Ordinal;
}

void OrdinalToPermutation(int Ordinal, int* vector, int n, int offset) {
    int Coeff_i;
    int Temp;
    // Construct an inital permutation
    for(int i = 0; i < n; i++)
        vector[i] = i+offset;

    for(int i = 1; i < n; i++) {
        // Compute the coefficent
        Coeff_i   = Ordinal % (i+1);
        // Divide out current "factorial number base"
        Ordinal   /= (i+1);

        // Exchange elements
        Temp            = vector[i];
        vector[i]       = vector[Coeff_i];
        vector[Coeff_i] = Temp;
    }
}
