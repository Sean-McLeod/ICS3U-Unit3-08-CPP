// Copyright (c) 2020 Sean McLeod All rights reserved

// Created by Sean McLeod
// Created on December 2020
// This program tells the user if the typed year is a leap year

#include <iostream>
#include <string>

int main()  {
    // this function can tell the user if the year is a leap year

    std::string yearString;
    const int LEAP_YEAR_FOUR = 4;
    const int LEAP_YEAR_HUNDRED = 100;
    const int LEAP_YEAR_FOUR_HUNDRED = 400;
    int yearNumber;
    int divisibleFour;
    int divisibleHundred;
    int divisibleFourHundred;

    std::cout << "This program can check if the entered year is a leap year."
              << std::endl;
    std::cout << "" << std::endl;

    // input
    std::cout << "Type in a year: " << std::endl;
    std::cin >> yearString;
    std::cout << "" << std::endl;

    // process and output
    try {
        yearNumber = std::stoi(yearString.c_str());

        divisibleFour = yearNumber % LEAP_YEAR_FOUR;
        divisibleHundred = yearNumber % LEAP_YEAR_HUNDRED;
        divisibleFourHundred = yearNumber % LEAP_YEAR_FOUR_HUNDRED;

        if (divisibleFour == 0) {
            if (divisibleHundred == 0) {
                if (divisibleFourHundred == 0) {
                    std::cout << yearNumber << " is a leap year!" << std::endl;

                } else {
                    std::cout << yearNumber << " is not a leap year"
                              << std::endl;
                }
            } else {
                std::cout << yearNumber << " is a leap year!" << std::endl;
            }

        } else {
            std::cout << yearNumber << " is not a leap year" << std::endl;
        }
        }
    catch (std::invalid_argument) {
        std::cout << "This is not a number!" << std::endl;
    }
}
