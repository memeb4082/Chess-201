# Collect all the source files
file(GLOB SOURCES "*.cpp")

# Create a library from the source files
add_library(YourLibraryName ${SOURCES})