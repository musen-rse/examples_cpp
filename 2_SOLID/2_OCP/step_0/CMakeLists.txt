cmake_minimum_required(VERSION 3.21)

project(SRP)


set(app app)

add_executable(${app})

set(SOURCE
    core/app.cpp
    shapes.cpp
    main.cpp
)

set(HEADER
    shapes.h
    core/app.h
)

target_sources(${app} PRIVATE ${SOURCE} ${HEADER})


target_compile_features(${app} PRIVATE cxx_std_17)
