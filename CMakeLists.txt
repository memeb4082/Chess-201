cmake_minimum_required(VERSION 3.0)
project(Chess)

# Set the C++ standard to use
set(CMAKE_CXX_STANDARD 11)

# Add the 'include' directory
include_directories(include)

# Add the 'src' directory
add_subdirectory(src)

# Add any other dependencies or configuration for your project
# ...

# Collect all the source files
file(GLOB SOURCES "src/*.cpp")

# Create your executable and link any necessary libraries
add_executable(Chess ${SOURCES})
target_link_libraries(Chess YourLibraryName)
