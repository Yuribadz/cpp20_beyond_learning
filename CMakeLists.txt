cmake_minimum_required(VERSION 3.2 FATAL_ERROR)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(cpp20_patterns)

add_subdirectory(src/Behavioral)
add_subdirectory(src/Creational)
add_subdirectory(src/Structural)