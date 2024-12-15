cmake_minimum_required(VERSION 3.10)
project(IggyParser C)

set(CMAKE_C_STANDARD 99)

# Include project source directory (if needed)
include_directories(${PROJECT_SOURCE_DIR})

# Create a Windows application (not a console application)
add_executable(iggyParser main.c)
