cmake_minimum_required(VERSION 3.15)

project(functions_tests LANGUAGES CXX)

add_library(functions STATIC functions.cpp)

add_executable(functions_test test.cpp)
target_link_libraries(functions_test PRIVATE functions)

enable_testing()

find_package(GTest CONFIG REQUIRED)
target_link_libraries(functions_test PRIVATE GTest::gmock GTest::gtest GTest::gmock_main GTest::gtest_main)
add_test(functions_gtest functions_test)
