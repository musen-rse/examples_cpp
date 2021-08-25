cmake_minimum_required(VERSION 3.9)

set(CMAKE_CXX_STANDARD 11)

project(HVAC)

set(app hvac)

add_executable(${app} test/main.cpp test/environmentcontrollertest.cpp)

target_include_directories(${app} PRIVATE src)

target_include_directories(${app} PRIVATE googletest/googletest/include
                                          googletest/googlemock/include)
target_link_directories(${app} PRIVATE googletest)
target_link_libraries(${app} PRIVATE gtest gmock)