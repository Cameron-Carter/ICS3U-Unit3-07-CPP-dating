// Copyright (c) Cameron Carter All rights reserved
//
// Created by: Cameron Carter
// Created on: May 2021
// This program lets the user see if they can date a grandchild

#include <iostream>
#include <random>
#include <string>

int main() {
    // This program lets the user guess an integer from 1-10
    std::string ageAsString;
    int ageAsInteger;

    // Input
    std::cout << "Enter your age: ";
    std::cin >> ageAsString;

    // Process and Output
    try {
        ageAsInteger = std::stoi(ageAsString);
        if (ageAsInteger > 25 && ageAsInteger < 40) {
            std::cout << "\nYou can date my grandchild!" << std::endl;
        } else if (ageAsInteger <= 25) {
            std::cout << "\nYou are too young!" << std::endl;
        } else {
            std::cout << "\nYou are too old!" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "\n" << ageAsString
        << " is not a valid age" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
