// Copyright Lily Liu All rights reserved.
//
// Created by: Lily Liu
// Created on: Sept 2021
// This program decides if user is allowed to date the grandchild

#include <iostream>
#include <string>


int main() {
    // This program decides if user is allowed to date the grandchild
    int userAge;
    std::string userAgeString;

    // input
    std::cout << "Please enter your age : ";
    std::cin >> userAgeString;

    // process and output
    try {
        userAge = std::stoi(userAgeString);
        if (userAge > 25 && userAge < 40) {
            std::cout << "You have been accepted to date my grandchild.";
        } else if (userAge > 40) {
            std::cout << "Sorry, you are too old!";
        } else {
            std::cout << "Sorry, you are too young!" <<std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Not a valid age.";
    }

    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
