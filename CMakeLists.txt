# Minimum required version of CMake
cmake_minimum_required(VERSION 3.0)

# Project name and description
project(piCalculator CXX)

# Add source files
add_executable(piCalculator src/main.cpp)

# Set C++ standard (optional)
target_compile_features(piCalculator PRIVATE cxx_std_11)

target_include_directories(piCalculator PRIVATE include/)