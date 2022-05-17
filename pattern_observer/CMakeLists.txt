cmake_minimum_required(VERSION 3.16)

set(CMAKE_BUILD_TYPE Debug)

project(MINICAD
        VERSION 1.0
        DESCRIPTION "An example project with CMake"
        LANGUAGES CXX)


add_subdirectory(src/console_ui)
add_subdirectory(src/model)
add_subdirectory(src/ui)
add_subdirectory(app)