// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in November 2022
// A program that prints out every RGB value

#include <iostream>

int main() {
    // Prints out every RGB value

    std::cout << "Press Enter to start printing all RGB values.";
    std::cout << std::endl;
    std::cin.get();
    for (int rValue = 0; rValue < 256; rValue++) {
        for (int gValue = 0; gValue < 256; gValue++) {
            for (int bValue = 0; bValue < 256; bValue++) {
                std::cout << "R " << rValue;
                std::cout << " G " << gValue;
                std::cout << " B " << bValue;
                std::cout << std::endl;
            }
        }
    }
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
