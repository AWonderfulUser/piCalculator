# Minimum required version of CMake
cmake_minimum_required(VERSION 3.0)

# Project name and description
project(MyApp CXX)

# Add source files
add_executable(myapp src/main.cpp)

# Set C++ standard (optional)
target_compile_features(myapp PRIVATE cxx_std_11)
