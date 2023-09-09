cmake_minimum_required(VERSION 3.2 FATAL_ERROR)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# Target creational
add_executable(creational patterns.cpp)

target_include_directories(creational
        PUBLIC
        PRIVATE
        builder
        factory
        )
#target_compile_definitions(creational
#        )
target_sources(creational
        PRIVATE
        patterns.cpp
        builder/builder.cpp
        factory/factory.cpp
        )
if (CMAKE_CXX_COMPILER_ID STREQUAL "Clang")
  # using Clang
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
  # using GCC
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "Intel")
  # using Intel C++
elseif (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
  # using Visual Studio C++
target_compile_options(creational
        PRIVATE
        /std:c++20
        /O2
)
endif()

target_compile_features(creational
        PUBLIC
        cxx_std_20
        )
target_link_libraries(creational
        PUBLIC
        )
target_link_options(creational
        PRIVATE
)
set_target_properties(creational
        PROPERTIES
        ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
        )