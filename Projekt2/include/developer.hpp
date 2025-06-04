/**
 * @file developer.hpp
 * @brief Header file for the Developer class
 * 
 * This file contains the declaration of the Developer class which serves
 * as a base class for JuniorDeveloper and SeniorDeveloper.
 */

#ifndef DEVELOPER_HPP
#define DEVELOPER_HPP

#include <string>
#include <iostream>
#include <memory>

/**
 * @class Developer
 * @brief Base class for different types of developers
 * 
 * The Developer class provides common functionality for all developer types
 * including name, alias, and logo management.
 */
class Developer {
public:
    /**
     * @brief Constructor for Developer class
     * @param name The name of the developer
     * @param alias The alias of the developer
     */
    Developer(const std::string& name, const std::string& alias);
    
    /**
     * @brief Virtual destructor for proper inheritance
     */
    virtual ~Developer() = default;
    
    /**
     * @brief Static method to simulate drinking coffee
     * 
     * Outputs a message about drinking coffee
     */
    static void drink_coffee();
    
    /**
     * @brief Loads a logo from a file
     * @param filename The name of the file containing the logo
     * @throw std::runtime_error if the file cannot be opened
     */
    void load_logo_from_file(const std::string& filename);
    
    /**
     * @brief Get the name of the developer
     * @return The name as a string
     */
    std::string get_name() const;
    
    /**
     * @brief Get the alias of the developer
     * @return The alias as a string
     */
    std::string get_alias() const;
    
    /**
     * @brief Get the logo of the developer
     * @return The logo as a string
     */
    std::string get_logo() const;
    
    /**
     * @brief Pure virtual method to solve a problem
     * 
     * This method must be implemented by derived classes
     */
    virtual void solve_problem() = 0;
    
private:
    std::string name_;   ///< The name of the developer
    std::string alias_;  ///< The alias of the developer
    std::string logo_;   ///< The logo of the developer
};

/**
 * @brief Stream operator overload for Developer class
 * @param os The output stream
 * @param dev The Developer object to output
 * @return The output stream
 */
std::ostream& operator<<(std::ostream& os, const Developer& dev);

#endif // DEVELOPER_HPP
