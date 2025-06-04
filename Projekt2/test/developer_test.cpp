/**
 * @file developer_test.cpp
 * @brief Test file for Developer classes
 * 
 * This file contains tests for the Developer, JuniorDeveloper, and SeniorDeveloper classes.
 */

#include "developer.hpp"
#include "junior_developer.hpp"
#include "senior_developer.hpp"
#include <gtest/gtest.h>
#include <fstream>
#include <string>

// Test fixture for Developer classes
class DeveloperTest : public ::testing::Test {
protected:
    void SetUp() override {
        // Create test logo file
        std::ofstream logo_file(LOGO_PATH + std::string("test_logo.txt"));
        logo_file << "Test Logo Content" << std::endl;
        logo_file.close();
    }

    void TearDown() override {
        // Clean up test files if needed
    }
};

// Test JuniorDeveloper constructor and getters
TEST_F(DeveloperTest, JuniorDeveloperConstructorAndGetters) {
    JuniorDeveloper junior("Test Name", "Test Alias");
    
    EXPECT_EQ(junior.get_name(), "Test Name");
    EXPECT_EQ(junior.get_alias(), "Test Alias");
    EXPECT_EQ(junior.get_logo(), "");
}

// Test SeniorDeveloper constructor and getters
TEST_F(DeveloperTest, SeniorDeveloperConstructorAndGetters) {
    SeniorDeveloper senior("Test Name", "Test Alias");
    
    EXPECT_EQ(senior.get_name(), "Test Name");
    EXPECT_EQ(senior.get_alias(), "Test Alias");
    EXPECT_EQ(senior.get_logo(), "");
}

// Test load_logo_from_file - empty before loading
TEST_F(DeveloperTest, LogoEmptyBeforeLoading) {
    JuniorDeveloper junior("Test Name", "Test Alias");
    EXPECT_EQ(junior.get_logo(), "");
}

// Test load_logo_from_file - correct content after loading
TEST_F(DeveloperTest, LogoContentAfterLoading) {
    JuniorDeveloper junior("Test Name", "Test Alias");
    junior.load_logo_from_file("test_logo.txt");
    EXPECT_EQ(junior.get_logo(), "Test Logo Content\n");
}

// Test load_logo_from_file - exception on invalid filename
TEST_F(DeveloperTest, LogoLoadingThrowsException) {
    JuniorDeveloper junior("Test Name", "Test Alias");
    EXPECT_THROW(junior.load_logo_from_file("non_existent_file.txt"), std::runtime_error);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
