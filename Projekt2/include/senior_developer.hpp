/**
 * @file senior_developer.hpp
 * @brief Header file for the SeniorDeveloper class
 * 
 * This file contains the declaration of the SeniorDeveloper class which
 * inherits from the Developer base class
 */

#ifndef SENIOR_DEVELOPER_HPP
#define SENIOR_DEVELOPER_HPP

#include "developer.hpp"

/**
 * @class SeniorDeveloper
 * @brief Class representing a senior developer
 * 
 * The SeniorDeveloper class inherits from Developer and implements
 * the solve_problem method with senior-specific behavior
 */
class SeniorDeveloper : public Developer {
public:
    /**
     * @brief Constructor for SeniorDeveloper class
     * @param name The name of the senior developer
     * @param alias The alias of the senior developer
     */
    SeniorDeveloper(const std::string& name, const std::string& alias);
    
    /**
     * @brief Implementation of the solve_problem method
     * 
     * Outputs the developer information and a senior-specific message,
     * then calls the drink_coffee method
     */
    void solve_problem() override;
};

#endif // SENIOR_DEVELOPER_HPP
