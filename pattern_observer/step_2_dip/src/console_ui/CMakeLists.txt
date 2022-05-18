
project(MINICAD
        VERSION 1.0
        DESCRIPTION "An example project with CMake"
        LANGUAGES CXX)

set(lib_name console_ui)

find_package(Curses REQUIRED)

add_library(${lib_name} STATIC)

SET(SOURCE
    screen.cpp
    window.cpp
    canvas.cpp
    console.cpp
    menu.cpp
)

SET(HEADER
    screen.h
    window.h
    canvas.h
    console.h
    menu.h
)

target_sources(${lib_name} PRIVATE
    ${SOURCE}
    ${HEADER}
)

target_include_directories(${lib_name} PRIVATE src ${CURSES_INCLUDE_DIR})
target_link_libraries(${lib_name} PRIVATE ${CURSES_LIBRARIES})
target_compile_features(${lib_name} PRIVATE cxx_std_17)
target_compile_options(${lib_name} PRIVATE -Wall)

target_include_directories(${lib_name} PUBLIC ${CMAKE_CURRENT_LIST_DIR})