cmake_minimum_required(VERSION 3.21)

project(SRP LANGUAGES CXX)

set(app app)

add_executable(${app})

set(SOURCE
    main.cpp
    core/rectangle.cpp
    core/geometry_application.cpp
    graphical_application.cpp
    graphical_rectangle.cpp
)

set(HEADER
    core/rectangle.h
    core/geometry_application.h
    graphical_application.h
    graphical_rectangle.h
)

target_sources(${app} PRIVATE ${SOURCE} ${HEADER})


target_compile_features(${app} PRIVATE cxx_std_17)