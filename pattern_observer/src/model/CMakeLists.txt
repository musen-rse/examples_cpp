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

target_link_libraries(${lib_name} PUBLIC compiler_options ui)

target_include_directories(${lib_name} PUBLIC ${CMAKE_CURRENT_LIST_DIR})