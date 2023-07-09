cmake_minimum_required(VERSION 3.2 FATAL_ERROR)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# Target creational
add_executable(creational patterns.cpp "builder.cpp" "factory.cpp")

target_include_directories(creational
        PUBLIC
        PRIVATE
        ../../inc/Creational
        )
#target_compile_definitions(creational
#        )
target_sources(creational
        PRIVATE
        patterns.cpp
        builder.cpp
        factory.cpp
        )
target_compile_options(creational
        PRIVATE
#/Zi /MT /EHsc /Oy- /Ob0 /DEBUG
        )
target_compile_features(creational
        PUBLIC
        cxx_std_20
        )
target_link_libraries(creational
        PUBLIC
        )
target_link_options(creational
        PRIVATE 
        "/DEBUG:FULL"
)
set_target_properties(creational
        PROPERTIES
        ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
        )