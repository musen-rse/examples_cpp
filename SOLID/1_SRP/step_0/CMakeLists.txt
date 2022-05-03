cmake_minimum_required(VERSION 3.21)

project(SRP)

set(app app)

add_executable(${app})

set(SOURCE
    main.cpp
    geometry_application.cpp
    graphical_application.cpp
)

set(HEADER
    geometry_application.h
    graphical_application.h
)

target_sources(${app} PRIVATE ${SOURCE} ${HEADER})


target_compile_features(${app} PRIVATE cxx_std_17)