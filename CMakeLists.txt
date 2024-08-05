cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(maTH VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the library
add_library(maTH STATIC maTH.cpp)

# Add the executable
add_executable(main main.cpp)

# Link the library to the executable
target_link_libraries(main maTH)