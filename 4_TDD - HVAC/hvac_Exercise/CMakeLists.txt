cmake_minimum_required(VERSION 3.9)

set(CMAKE_CXX_STANDARD 17)

project(HVAC)

set(app hvacTest)
find_package(GTest REQUIRED)

add_executable(${app} test/main.cpp test/environmentcontrollertest.cpp)

target_include_directories(${app} PRIVATE src)

target_link_libraries(${app} GTest::gtest GTest::gtest_main)
