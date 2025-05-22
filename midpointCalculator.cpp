// Copyright (c) 2025 Reid MacLean All rights reserved.
//
// Created by: Reid MacLean
// Created on: May 2025
// This program uses a function
// to calculate the midpoint of a line segment with user input

#include <iostream>
#include <string>

// Function to get a valid number from the user
double getValidNumber(const std::string& prompt) {
    double number;
    std::string input;

    while (true) {
        std::cout << prompt;
        std::cin >> number;

        if (std::cin.fail()) {
            // Clear error state
            std::cin.clear();
            // Discard the invalid input
            std::getline(std::cin, input);
            std::cout << "Invalid input. Please enter a valid number.\n";
        } else {
            // Remove leftover characters
            std::getline(std::cin, input);
            return number;
        }
    }
}

// Function to calculate and display the midpoint
void calculateMidpoint(double x1, double y1, double x2, double y2) {
    double midX = (x1 + x2) / 2;
    double midY = (y1 + y2) / 2;
    std::cout << "The midpoint is: (" << midX << ", " << midY << ")\n";
}

int main() {
    std::cout << "Hello, today this program shall\n";
    std::cout << "calculate and find the midpoint between two points\n";
    std::cout << "using the formula: M((x1 + x2) / 2, (y1 + y2) / 2)\n";

    double x1 = getValidNumber("Enter x1: ");
    double y1 = getValidNumber("Enter y1: ");
    double x2 = getValidNumber("Enter x2: ");
    double y2 = getValidNumber("Enter y2: ");

    calculateMidpoint(x1, y1, x2, y2);

    return 0;
}
