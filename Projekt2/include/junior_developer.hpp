/**
 * @file junior_developer.hpp
 * @brief Header file for the JuniorDeveloper class
 * 
 * This file contains the declaration of the JuniorDeveloper class which
 * inherits from the Developer base class.
 */

#ifndef JUNIOR_DEVELOPER_HPP
#define JUNIOR_DEVELOPER_HPP

#include "developer.hpp"

/**
 * @class JuniorDeveloper
 * @brief Class representing a junior developer
 * 
 * The JuniorDeveloper class inherits from Developer and implements
 * the solve_problem method with junior-specific behavior.
 */
class JuniorDeveloper : public Developer {
public:
    /**
     * @brief Constructor for JuniorDeveloper class
     * @param name The name of the junior developer
     * @param alias The alias of the junior developer
     */
    JuniorDeveloper(const std::string& name, const std::string& alias);
    
    /**
     * @brief Implementation of the solve_problem method
     * 
     * Outputs the developer information and a junior-specific message,
     * then calls the drink_coffee method.
     */
    void solve_problem() override;
};

#endif // JUNIOR_DEVELOPER_HPP
