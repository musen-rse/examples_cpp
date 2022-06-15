cmake_minimum_required(VERSION 3.9)

set(CMAKE_CXX_STANDARD 11)

project(Factory)

set(app app)

find_package(Qt6 COMPONENTS Widgets REQUIRED)

file( GLOB SRCS *.cpp *.h core/*.cpp core/*.h )
add_executable(${app} ${SRCS})

target_link_libraries(${app} Qt6::Widgets)

target_include_directories(${app} PRIVATE . core)
