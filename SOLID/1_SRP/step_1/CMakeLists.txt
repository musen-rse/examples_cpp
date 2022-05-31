cmake_minimum_required(VERSION 3.21)

project(SRP)

# GUI APPLICATION
set(app ui_app)

add_executable(${app})

set(SOURCE
    graphical_application.cpp
)

set(HEADER
    graphical_application.h
)

target_sources(${app} PRIVATE ${SOURCE} ${HEADER})


target_compile_features(${app} PRIVATE cxx_std_17)


# GEOMETRY APPLICATION
set(app geo_app)

add_executable(${app})

set(SOURCE
    geometry_application.cpp
)

set(HEADER
    geometry_application.h
)

target_sources(${app} PRIVATE ${SOURCE} ${HEADER})


target_compile_features(${app} PRIVATE cxx_std_17)