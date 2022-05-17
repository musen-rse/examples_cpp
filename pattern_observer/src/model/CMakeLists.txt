
project(MINICAD
        VERSION 1.0
        DESCRIPTION "An example project with CMake"
        LANGUAGES CXX)

set(lib_name model)

add_library(${lib_name})

SET(SOURCE
    data.cpp
)

SET(HEADER
    data.h
)

target_sources(${lib_name} PRIVATE
    ${SOURCE}
    ${HEADER}
)

target_compile_features(${lib_name} PRIVATE cxx_std_17)
target_compile_options(${lib_name} PRIVATE -Wall)
target_link_libraries(${lib_name} PUBLIC console_ui ui)

target_include_directories(${lib_name} PUBLIC ${CMAKE_CURRENT_LIST_DIR})