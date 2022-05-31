cmake_minimum_required(VERSION 3.21)

project(ISP)

set(app app)

add_executable(${app})

set(SOURCE
    core/PhotoApp.cpp
    core/PayrollApp.cpp
    core/ShopApp.cpp
    main.cpp
)

set(HEADER

)

target_sources(${app} PRIVATE ${SOURCE} ${HEADER})


target_compile_features(${app} PRIVATE cxx_std_17)
