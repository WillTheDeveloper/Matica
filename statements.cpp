//
// Created by will on 06/03/2022.
//

#include <valarray>
#include "headers/statements.h"

using namespace statement;

// Test if a number is odd
bool statement::isOdd(int number) {
    return number % 2 == 1;
}

// Test if a number is even
bool statement::isEven(int number) {
    return number % 2 == 0;
}

// Test if a number is prime
bool statement::isPrime(int number) {
    if (number == 1) {
        return false;
    }
    for (int i = 2; i < number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

// Test if a number is a palindrome
bool statement::isPalindrome(int number) {
    int reversed = 0;
    int original = number;
    while (number != 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }
    return reversed == original;
}

// Test if a number is a perfect square
bool statement::isPerfectSquare(int number) {
    int root = sqrt(number);
    return root * root == number;
}

// Test if a number is a fibonacci number
bool statement::isFibonacci(int number) {
    int first = 1;
    int second = 1;
    int next = 0;
    while (next <= number) {
        next = first + second;
        first = second;
        second = next;
    }
    return next == number;
}

// Test if a number is a happy number
bool statement::isHappy(int number) {
    int sum = 0;
    while (number != 0) {
        sum += pow(number % 10, 2);
        number /= 10;
    }
    return sum == 1;
}

// Test if a number is divisible by 2
bool statement::isDivisibleBy2(int number) {
    return number % 2 == 0;
}

// Test if a number is divisible by 3
bool statement::isDivisibleBy3(int number) {
    return number % 3 == 0;
}

// Test if a number is divisible by 5
bool statement::isDivisibleBy5(int number) {
    return number % 5 == 0;
}

// Test if a number is divisible by 7
bool statement::isDivisibleBy7(int number) {
    return number % 7 == 0;
}

// Test if a number is divisiable by anothre number
bool statement::isDivisibleBy(int number, int divisor) {
    return number % divisor == 0;
}

// Test if the number is abundant
bool statement::isAbundant(int number) {
    int sum = 0;
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return sum > number;
}

// Test if the number is deficient
bool statement::isDeficient(int number) {
    int sum = 0;
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return sum < number;
}

// Test if the number is pentagonal
bool statement::isPentagonal(int number) {
    int root = sqrt(2 * number + 1);
    return root == (int) sqrt(2 * number + 1);
}

// Test if the number is triangular
bool statement::isTriangular(int number) {
    int root = sqrt(2 * number);
    return root == (int) sqrt(2 * number);
}

// Test if the number is hexagonal
bool statement::isHexagonal(int number) {
    int root = sqrt(2 * number + 1);
    return root == (int) sqrt(2 * number + 1);
}

// Test if the number is heptagonal
bool statement::isHeptagonal(int number) {
    int root = sqrt(2 * number + 1);
    return root == (int) sqrt(2 * number + 1);
}

// Test if the number is octagonal
bool statement::isOctagonal(int number) {
    int root = sqrt(2 * number + 1);
    return root == (int) sqrt(2 * number + 1);
}

