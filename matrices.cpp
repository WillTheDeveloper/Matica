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

// Function that adds two matrices
int matrices::AddMatrices(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p) {
    return a + j + m;
}

// Function that subtracts two matrices
int matrices::SubtractMatrices(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p) {
    return a - j - m;
}

// Function that multiplies two matrices
int matrices::MultiplyMatrices(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p) {
    return a * j * m;
}

// Function that divides two matrices
int matrices::DivideMatrices(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p) {
    return a / j / m;
}

// Function that calculates the determinant of a matrix
int matrices::Determinant(int a, int b, int c, int d, int e, int f, int g, int h, int i) {
    return a * matrices::ThreeDimensionalMatrix(e, f, g, h, i, b, c, d, f) - b * matrices::ThreeDimensionalMatrix(e, f, g, h, i, a, c, d, f) + c * matrices::ThreeDimensionalMatrix(e, f, g, h, i, a, b, d, f) - d * matrices::ThreeDimensionalMatrix(e, f, g, h, i, a, b, c, f);
}

// Function that calculates the inverse of a matrix
int matrices::Inverse(int a, int b, int c, int d, int e, int f, int g, int h, int i) {
    return matrices::Determinant(a, b, c, d, e, f, g, h, i) / matrices::Determinant(a, b, c, d, e, f, g, h, i);
}

// Function that calculates the transpose of a matrix
int matrices::Transpose(int a, int b, int c, int d, int e, int f, int g, int h, int i) {
    return a * e + b * f + c * g + d * h + e * i + f * i + g * i + h * i;
}