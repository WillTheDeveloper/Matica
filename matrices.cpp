//
// Created by will on 05/03/2022.
//

#include "headers/matrices.h"

using namespace matrices;

// Create a function that calculates the determinant of a 2x2 matrix
int matrices::TwoDimensionalMatrix(int a, int b, int c, int d) {
    return a * d - b * c;
}

// Create a function that calculates the determinant of a 3x3 matrix
int matrices::ThreeDimensionalMatrix(int a, int b, int c, int d, int e, int f, int g, int h, int i) {
    return a * matrices::TwoDimensionalMatrix(e, f, g, h) - b * matrices::TwoDimensionalMatrix(d, f, g, h) + c * matrices::TwoDimensionalMatrix(d, e, g, h);
}
