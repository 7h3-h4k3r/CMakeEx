cmake_minimum_required(VERSION 3.20)
project(Calculator)

add_executable(
    calculator
    src/main.cpp
    src/math.cpp
    src/geometry.cpp
)

target_include_directories(
    calculator
    PRIVATE
    include
)