# Find GTest package
find_package(GTest REQUIRED)

# Add test executable
add_executable(developer_test developer_test.cpp)

# Link with the developer library and GTest
target_link_libraries(developer_test
    PRIVATE
    developer_lib
    GTest::GTest
    GTest::Main
)

# Add test to CTest
add_test(NAME DeveloperTest COMMAND developer_test)

# Enable testing
enable_testing()
