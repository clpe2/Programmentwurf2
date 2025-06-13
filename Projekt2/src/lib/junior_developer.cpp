/**
 * @file junior_developer.cpp
 * @brief Implementation of the JuniorDeveloper class
 * 
 * This file contains the implementation of the JuniorDeveloper class methods.
 */

#include "junior_developer.hpp"
#include <iostream>

JuniorDeveloper::JuniorDeveloper(const std::string& name, const std::string& alias)
    : Developer(name, alias) {
}

void JuniorDeveloper::solve_problem() {
    std::cout << "Solving a problem:" << std::endl;
    std::cout << *this << std::endl;
    std::cout << "Holy IT&T!" << std::endl;
    Developer::drink_coffee();
}
