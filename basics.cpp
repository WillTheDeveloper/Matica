//
// Created by will on 04/03/2022.
//

#include <cstdarg>
#include <numeric>
#include <iterator>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include "headers/basics.h"

using namespace basic;

// Function to add multiple numbers
int add(int n, ...) {
    va_list args;
    va_start(args, n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += va_arg(args, int);
    }
    va_end(args);
    return sum;
}

// Function to subtract multiple numbers
int subtract(int n, ...) {
    va_list args;
    va_start(args, n);
    int sum = va_arg(args, int);
    for (int i = 1; i < n; i++) {
        sum -= va_arg(args, int);
    }
    va_end(args);
    return sum;
}

// Function to multiply multiple numbers
int multiply(int n, ...) {
    va_list args;
    va_start(args, n);
    int sum = 1;
    for (int i = 0; i < n; i++) {
        sum *= va_arg(args, int);
    }
    va_end(args);
    return sum;
}

// Function to divide multiple numbers
int divide(int n, ...) {
    va_list args;
    va_start(args, n);
    int sum = va_arg(args, int);
    for (int i = 1; i < n; i++) {
        sum /= va_arg(args, int);
    }
    va_end(args);
    return sum;
}