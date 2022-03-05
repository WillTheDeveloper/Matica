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
int basic::add(int n, ...) {
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
int basic::subtract(int n, ...) {
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
int basic::multiply(int n, ...) {
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
int basic::divide(int n, ...) {
    va_list args;
    va_start(args, n);
    int sum = va_arg(args, int);
    for (int i = 1; i < n; i++) {
        sum /= va_arg(args, int);
    }
    va_end(args);
    return sum;
}

// Function to find the maximum of multiple numbers
int basic::max(int n, ...) {
    va_list args;
    va_start(args, n);
    int max = va_arg(args, int);
    for (int i = 1; i < n; i++) {
        int temp = va_arg(args, int);
        if (temp > max) {
            max = temp;
        }
    }
    va_end(args);
    return max;
}

// Function to find the minimum of multiple numbers
int basic::min(int n, ...) {
    va_list args;
    va_start(args, n);
    int min = va_arg(args, int);
    for (int i = 1; i < n; i++) {
        int temp = va_arg(args, int);
        if (temp < min) {
            min = temp;
        }
    }
    va_end(args);
    return min;
}

// Function to find the average of multiple numbers
int basic::average(int n, ...) {
    va_list args;
    va_start(args, n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += va_arg(args, int);
    }
    va_end(args);
    return sum / n;
}

// Function to find the sum of all the numbers in a vector
int basic::sum(std::vector<int> v) {
    return std::accumulate(v.begin(), v.end(), 0);
}