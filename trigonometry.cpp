//
// Created by will on 06/03/2022.
//

#include "headers/trigonometry.h"

using namespace trig;

// Calculate trigonometry of a given angle
double trig::calculate(double angle, trig::trig_type type) {
    switch (type) {
        case trig::trig_type::sin:
            return sin(angle);
        case trig::trig_type::cos:
            return cos(angle);
        case trig::trig_type::tan:
            return tan(angle);
        default:
            return 0;
    }
}

// Calculate the inverse trigonometry of a given angle
double trig::calculate_inverse(double angle, trig::trig_type type) {
    switch (type) {
        case trig::trig_type::sin:
            return asin(angle);
        case trig::trig_type::cos:
            return acos(angle);
        case trig::trig_type::tan:
            return atan(angle);
        default:
            return 0;
    }
}

// Calculate the hyperbolic trigonometry of a given angle
double trig::calculate_hyperbolic(double angle, trig::trig_type type) {
    switch (type) {
        case trig::trig_type::sinh:
            return sinh(angle);
        case trig::trig_type::cosh:
            return cosh(angle);
        case trig::trig_type::tanh:
            return tanh(angle);
        default:
            return 0;
    }
}