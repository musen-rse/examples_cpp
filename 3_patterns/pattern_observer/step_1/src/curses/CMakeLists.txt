set(lib_name curses_adapter)

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

target_include_directories(${lib_name} PRIVATE ${CURSES_INCLUDE_DIR})
target_link_libraries(${lib_name} PRIVATE compiler_options ${CURSES_LIBRARIES})

target_include_directories(${lib_name} PUBLIC ${CMAKE_CURRENT_LIST_DIR})