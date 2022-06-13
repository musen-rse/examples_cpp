cmake_minimum_required(VERSION 3.9)

set(CMAKE_CXX_STANDARD 11)

project(Factory)

set(app app)

file( GLOB SRCS *.cpp *.h core/*.cpp core/*.h )
add_executable(${app} ${SRCS})

target_include_directories(${app} PRIVATE . core)
