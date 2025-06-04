# Add library sources
add_library(developer_lib
    developer.cpp
    junior_developer.cpp
    senior_developer.cpp
)

# Set include directories for the library
target_include_directories(developer_lib PUBLIC ${CMAKE_SOURCE_DIR}/include)

# Set library properties
set_target_properties(developer_lib PROPERTIES
    VERSION ${PROJECT_VERSION}
    SOVERSION ${PROJECT_VERSION_MAJOR}
)
