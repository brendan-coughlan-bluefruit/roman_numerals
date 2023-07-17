cmake_minimum_required(VERSION 3.12)
project(RomanNumerals)

# Set C standard to C11
set(CMAKE_C_STANDARD 11)

# Source files
set(SOURCES
    src/main.c
    src/roman.c
)

# Include directories
include_directories(include)

# Create the executable
add_executable(roman_main ${SOURCES})

# Test executable
add_executable(roman_tests
    tests/roman.tests.cpp
    src/roman.c
)

# Include directories for tests
target_include_directories(roman_tests PRIVATE include)

# Link with Google Test
target_link_libraries(roman_tests gtest gtest_main pthread)
