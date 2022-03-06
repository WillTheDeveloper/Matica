//
// Created by will on 06/03/2022.
//

#include <valarray>
#include "headers/correlation.h"

using namespace correlationH;

// Calculate the correlationH between two vectors
double correlationH::correlation(std::vector<double> &x, std::vector<double> &y) {
    double sum_x = 0;
    double sum_y = 0;
    double sum_xy = 0;
    double sum_x2 = 0;
    double sum_y2 = 0;
    double n = x.size();

    for (int i = 0; i < n; i++) {
        sum_x += x[i];
        sum_y += y[i];
        sum_xy += x[i] * y[i];
        sum_x2 += x[i] * x[i];
        sum_y2 += y[i] * y[i];
    }

    double corr = (n * sum_xy - sum_x * sum_y) / (sqrt(n * sum_x2 - sum_x * sum_x) * sqrt(n * sum_y2 - sum_y * sum_y));

    return corr;
}

// Calculate the correlationH coefficient between two vectors
double correlationH::correlation_coefficient(std::vector<double> &x, std::vector<double> &y) {
    double sum_x = 0;
    double sum_y = 0;
    double sum_xy = 0;
    double sum_x2 = 0;
    double sum_y2 = 0;
    double n = x.size();

    for (int i = 0; i < n; i++) {
        sum_x += x[i];
        sum_y += y[i];
        sum_xy += x[i] * y[i];
        sum_x2 += x[i] * x[i];
        sum_y2 += y[i] * y[i];
    }

    double corr = (n * sum_xy - sum_x * sum_y) / (sqrt(n * sum_x2 - sum_x * sum_x) * sqrt(n * sum_y2 - sum_y * sum_y));

    return corr;
}

// Calculate the correlationH coefficient between two vectors pearson
double correlationH::correlation_coefficient_pearson(std::vector<double> &x, std::vector<double> &y) {
    double sum_x = 0;
    double sum_y = 0;
    double sum_xy = 0;
    double sum_x2 = 0;
    double sum_y2 = 0;
    double n = x.size();

    for (int i = 0; i < n; i++) {
        sum_x += x[i];
        sum_y += y[i];
        sum_xy += x[i] * y[i];
        sum_x2 += x[i] * x[i];
        sum_y2 += y[i] * y[i];
    }

    double corr = (n * sum_xy - sum_x * sum_y) / (sqrt(n * sum_x2 - sum_x * sum_x) * sqrt(n * sum_y2 - sum_y * sum_y));

    return corr;
}

// Calculate the correlationH coefficient between two vectors spearman
double correlationH::correlation_coefficient_spearman(std::vector<double> &x, std::vector<double> &y) {
    double sum_x = 0;
    double sum_y = 0;
    double sum_xy = 0;
    double sum_x2 = 0;
    double sum_y2 = 0;
    double n = x.size();

    for (int i = 0; i < n; i++) {
        sum_x += x[i];
        sum_y += y[i];
        sum_xy += x[i] * y[i];
        sum_x2 += x[i] * x[i];
        sum_y2 += y[i] * y[i];
    }

    double corr = (n * sum_xy - sum_x * sum_y) / (sqrt(n * sum_x2 - sum_x * sum_x) * sqrt(n * sum_y2 - sum_y * sum_y));

    return corr;
}

// Calculate the correlationH coefficient between two vectors kendall
double correlationH::correlation_coefficient_kendall(std::vector<double> &x, std::vector<double> &y) {
    double sum_x = 0;
    double sum_y = 0;
    double sum_xy = 0;
    double sum_x2 = 0;
    double sum_y2 = 0;
    double n = x.size();

    for (int i = 0; i < n; i++) {
        sum_x += x[i];
        sum_y += y[i];
        sum_xy += x[i] * y[i];
        sum_x2 += x[i] * x[i];
        sum_y2 += y[i] * y[i];
    }

    double corr = (n * sum_xy - sum_x * sum_y) / (sqrt(n * sum_x2 - sum_x * sum_x) * sqrt(n * sum_y2 - sum_y * sum_y));

    return corr;
}