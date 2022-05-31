set(lib_name ui)

add_library(${lib_name})

SET(SOURCE
    TableChart.cpp
    BarChart.cpp
)

SET(HEADER
    TableChart.h
    BarChart.h
)

target_sources(${lib_name} PRIVATE
    ${SOURCE}
    ${HEADER}
)

target_link_libraries(${lib_name} PUBLIC compiler_options curses_adapter model)

target_include_directories(${lib_name} PUBLIC ${CMAKE_CURRENT_LIST_DIR})