//
// Created by will on 05/03/2022.
//

#ifndef MATICA_MATRICES_H
#define MATICA_MATRICES_H


namespace matrices {
    int TwoDimensionalMatrix(int a, int b, int c, int d);

    int ThreeDimensionalMatrix(int a, int b, int c, int d, int e, int f, int g, int h, int i);

    int
    AddMatrices(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o,
                int p);

    int
    SubtractMatrices(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n,
                     int o, int p);

    int
    MultiplyMatrices(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n,
                     int o, int p);

    int
    DivideMatrices(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n,
                   int o,
                   int p);

    int Determinant(int a, int b, int c, int d, int e, int f, int g, int h, int i);

    int Inverse(int a, int b, int c, int d, int e, int f, int g, int h, int i);

    int Transpose(int a, int b, int c, int d, int e, int f, int g, int h, int i);
}


#endif //MATICA_MATRICES_H
