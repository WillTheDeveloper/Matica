//
// Created by will on 06/03/2022.
//

#include <vector>
#include "headers/operations.h"

using namespace operations;

// Calculate the mean of a vector of numbers
double mean(std::vector<double> &numbers) {
    double sum = 0;
    for (double number : numbers) {
        sum += number;
    }
    return sum / numbers.size();
}

// Calculate the median of a vector of numbers
double median(std::vector<double> &numbers) {
    std::sort(numbers.begin(), numbers.end());
    if (numbers.size() % 2 == 0) {
        return (numbers[numbers.size() / 2] + numbers[numbers.size() / 2 - 1]) / 2;
    } else {
        return numbers[numbers.size() / 2];
    }
}

// Calculate the mode of a vector of numbers
double mode(std::vector<double> &numbers) {
    std::sort(numbers.begin(), numbers.end());
    int max_count = 0;
    double mode = 0;
    int current_count = 0;
    for (int i = 0; i < numbers.size(); i++) {
        if (i == 0 || numbers[i] != numbers[i - 1]) {
            current_count = 1;
            for (int j = i + 1; j < numbers.size(); j++) {
                if (numbers[i] == numbers[j]) {
                    current_count++;
                }
            }
            if (current_count > max_count) {
                max_count = current_count;
                mode = numbers[i];
            }
        }
    }
    return mode;
}