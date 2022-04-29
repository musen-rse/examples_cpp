cmake_minimum_required(VERSION 3.21)

set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(Weatherstation)

set(app weatherstation)

add_executable(${app})

target_sources(${app} PRIVATE
    main.cpp
    charts.cpp
    core/sensors.cpp
    core/application.cpp
    core/utilities.cpp
)
