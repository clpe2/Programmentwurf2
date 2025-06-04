cmake_minimum_required(VERSION 3.20)
project(developer_project VERSION 1.0.0 LANGUAGES CXX)

# Set C++14 standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add compiler flags
add_compile_options(-Wall -Wextra -pedantic)

# Define logo path
set(LOGO_PATH "${CMAKE_SOURCE_DIR}/assets/logos/")
add_compile_definitions(LOGO_PATH="${LOGO_PATH}")

# Include directories
include_directories(${CMAKE_SOURCE_DIR}/include)

# Add subdirectories
add_subdirectory(src)
add_subdirectory(test)
