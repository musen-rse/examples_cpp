set(app observer_pattern)

add_executable(${app} main.cpp)

target_link_libraries(${app} PRIVATE  compiler_options curses_adapter model ui)