/**
 * @file developer.cpp
 * @brief Implementation of the Developer class
 * 
 * This file contains the implementation of the Developer class methods.
 */

#include "developer.hpp"
#include <fstream>
#include <stdexcept>
#include <iostream>

// Path to logo files is defined in CMakeLists.txt as LOGO_PATH

Developer::Developer(const std::string& name, const std::string& alias)
    : name_(name), alias_(alias), logo_("") {
}

void Developer::drink_coffee() {
    std::cout << "Ahhhh, I needed that coffee!!!" << std::endl;
}

void Developer::load_logo_from_file(const std::string& filename) {
    std::ifstream file(LOGO_PATH + filename);
    if (!file.is_open()) {
        throw std::runtime_error("Could not open logo file: " + filename);
    }
    
    std::string content;
    std::string line;
    while (std::getline(file, line)) {
        content += line + "\n";
    }
    
    logo_ = content;
}

std::string Developer::get_name() const {
    return name_;
}

std::string Developer::get_alias() const {
    return alias_;
}

std::string Developer::get_logo() const {
    return logo_;
}

std::ostream& operator<<(std::ostream& os, const Developer& dev) {
    if (!dev.get_logo().empty()) {
        os << dev.get_logo();
    }
    os << "Name: " << dev.get_name() << std::endl;
    os << "Alias: " << dev.get_alias();
    return os;
}

