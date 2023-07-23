cmake_minimum_required(VERSION 3.2 FATAL_ERROR)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# Target puzzles_1

find_package(fmt REQUIRED)
add_executable(puzzles_1 puzzle.cpp)
target_include_directories(puzzles_1
        PRIVATE
        printing
        )
target_sources(puzzles_1
        PRIVATE
        puzzle.cpp
        printing/printing.cpp
        )
target_compile_options(puzzles_1
        PRIVATE
        )
target_compile_features(puzzles_1
        PUBLIC
        cxx_std_20
        )

target_link_libraries(puzzles_1 fmt::fmt)
set_target_properties(puzzles_1
        PROPERTIES
        ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
        )