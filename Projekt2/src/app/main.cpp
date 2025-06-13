/**
 * @file main.cpp
 * @brief Main application for the Developer project
 * 
 * This file contains the main application that creates developer objects,
 * adds them to a vector, and makes them solve problems.
 */

#include "developer.hpp"
#include "junior_developer.hpp"
#include "senior_developer.hpp"
#include <iostream>
#include <vector>
#include <memory>

/**
 * @brief Main function
 * @return Exit code
 */
int main() {
    // Create a vector of shared pointers to Developer objects
    std::vector<std::shared_ptr<Developer>> developers;
    
    // Instantiate at least one SeniorDeveloper and one JuniorDeveloper
    auto senior = std::make_shared<SeniorDeveloper>("Bruce Wayne", "Batman");
    auto junior = std::make_shared<JuniorDeveloper>("Tim Drake", "Red Robin");
    
    // Try to load logos for developers
    try {
        senior->load_logo_from_file("senior_logo.txt");
    } catch (const std::runtime_error& e) {
        std::cerr << "Warning: " << e.what() << std::endl;
    }
    
    try {
        junior->load_logo_from_file("junior_logo.txt");
    } catch (const std::runtime_error& e) {
        std::cerr << "Warning: " << e.what() << std::endl;
    }
    
    // Add developers to the vector
    developers.push_back(senior);
    developers.push_back(junior);
    
    // Iterate over the vector and let each developer solve a problem
    for (auto it = developers.begin(); it != developers.end(); ++it) {
        (*it)->solve_problem();
        std::cout << std::endl;
    }
    
    return 0;
}
