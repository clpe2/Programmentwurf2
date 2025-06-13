/**
 * @file senior_developer.cpp
 * @brief Implementation of the SeniorDeveloper class
 * 
 * This file contains the implementation of the SeniorDeveloper class methods.
 */

#include "senior_developer.hpp"
#include <iostream>

SeniorDeveloper::SeniorDeveloper(const std::string& name, const std::string& alias)
    : Developer(name, alias) {
}

void SeniorDeveloper::solve_problem() {
    std::cout << "Solving a problem:" << std::endl;
    std::cout << *this << std::endl;
    std::cout << "Good grammar is essential, Robin." << std::endl;
    Developer::drink_coffee();
}
