//
// Created by will on 06/03/2022.
//

#include <valarray>
#include "headers/graphing.h"

using namespace graphing;

// Calculate the sine of the given angle
double graphing::sine(double angle) {
    return sin(angle);
}

// Calculate the cosine of the given angle
double graphing::cosine(double angle) {
    return cos(angle);
}

// Calculate the tangent of the given angle
double graphing::tangent(double angle) {
    return tan(angle);
}

// Calculate the secant of the given angle
double graphing::secant(double angle) {
    return 1 / cos(angle);
}

// Calculate the cosecant of the given angle
double graphing::cosecant(double angle) {
    return 1 / sin(angle);
}

// Calculate the cotangent of the given angle
double graphing::cotangent(double angle) {
    return 1 / tan(angle);
}

// Calculate the inverse sine of the given angle
double graphing::inverse_sine(double angle) {
    return asin(angle);
}

// Calculate the inverse cosine of the given angle
double graphing::inverse_cosine(double angle) {
    return acos(angle);
}

// Calculate the inverse tangent of the given angle
double graphing::inverse_tangent(double angle) {
    return atan(angle);
}

// Calculate the inverse secant of the given angle
double graphing::inverse_secant(double angle) {
    return 1 / acos(angle);
}

// Calculate the inverse cosecant of the given angle
double graphing::inverse_cosecant(double angle) {
    return 1 / asin(angle);
}

// Calculate the inverse cotangent of the given angle
double graphing::inverse_cotangent(double angle) {
    return 1 / atan(angle);
}

// Calculate the hyperbolic sine of the given angle
double graphing::hyperbolic_secant(double angle) {
    return sinh(angle);
}

// Calculate the hyperbolic cosine of the given angle
double graphing::hyperbolic_cosecant(double angle) {
    return cosh(angle);
}

// Calculate the hyperbolic tangent of the given angle
double graphing::hyperbolic_cotangent(double angle) {
    return tanh(angle);
}

// Calculate the hyperbolic secant of the given angle
double graphing::hyperbolic_secant(double angle) {
    return 1 / cosh(angle);
}

// Calculate the hyperbolic cosecant of the given angle
double graphing::hyperbolic_cosecant(double angle) {
    return 1 / sinh(angle);
}

// Calculate the hyperbolic cotangent of the given angle
double graphing::hyperbolic_cotangent(double angle) {
    return 1 / tanh(angle);
}

// Calculate the inverse hyperbolic sine of the given angle
double graphing::inverse_hyperbolic_secant(double angle) {
    return asinh(angle);
}

// Calculate the inverse hyperbolic cosine of the given angle
double graphing::inverse_hyperbolic_cosecant(double angle) {
    return acosh(angle);
}

// Calculate the inverse hyperbolic tangent of the given angle
double graphing::inverse_hyperbolic_cotangent(double angle) {
    return atanh(angle);
}

// Calculate the inverse hyperbolic secant of the given angle
double graphing::inverse_hyperbolic_secant(double angle) {
    return 1 / acosh(angle);
}

// Calculate the inverse hyperbolic cosecant of the given angle
double graphing::inverse_hyperbolic_cosecant(double angle) {
    return 1 / asinh(angle);
}

// Calculate the inverse hyperbolic cotangent of the given angle
double graphing::inverse_hyperbolic_cotangent(double angle) {
    return 1 / atanh(angle);
}