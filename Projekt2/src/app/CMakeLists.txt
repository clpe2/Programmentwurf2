# Add main application executable
add_executable(developer_app main.cpp)

# Link with the developer library
target_link_libraries(developer_app PRIVATE developer_lib)
