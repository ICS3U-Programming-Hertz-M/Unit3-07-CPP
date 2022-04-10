// Copyright (c) 2022 Hertz All rights reserved.
//
// Created by: Hertz Antonella
// Created on: Oct 2019
// This program ask the host to enter yes/no
// to see if they can date their grandchild

#include <iostream>

int main() {
    // this function uses a compound boolean statement
    std::string  youRich;
    std::string youGoodLooking;
    // questions asked 
    std::cout << "Are you rich(yes/no): ";
    std::cin >> youRich;

    std::cout << "Are you good looking(yes/no): ";
    std::cin >> youGoodLooking;

    // want they want as an answer
    if (youRich == "yes" || youGoodLooking == "yes") {
        std::cout << "You can date my grandchild.\n";
        std::cout << "glad to meet you";
    } else if (youRich == "no" && youGoodLooking == "no") {
        std::cout << "You can't date my grandchild.\n";
        std::cout << "maybe next time";
    } else {
        std::cout << "please use yes/no\n";
        std::cout << "try again";
    }
}
