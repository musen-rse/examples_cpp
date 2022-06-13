cmake_minimum_required(VERSION 3.16)

set(CMAKE_BUILD_TYPE Debug)

project(ObserverPattern
        VERSION 1.0
        DESCRIPTION "Observer Pattern Example"
        LANGUAGES CXX)

add_library(compiler_options INTERFACE)
target_compile_features(compiler_options INTERFACE cxx_std_17)
target_compile_options(compiler_options INTERFACE -Wall)

add_subdirectory(src/ui/curses)
add_subdirectory(src/core)
add_subdirectory(src/ui)
add_subdirectory(app)