cmake_minimum_required(VERSION 3.20)
project(test_regex)
set(CMAKE_CXX_STANDARD 20)

add_subdirectory(googletest)
add_subdirectory(benchmark)
add_executable(test_regex main.cpp)
target_link_libraries(test_regex benchmark::benchmark)
