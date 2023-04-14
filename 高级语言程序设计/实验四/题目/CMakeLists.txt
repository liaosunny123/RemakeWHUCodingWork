cmake_minimum_required(VERSION 3.25)
project(sub03)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(sub03
        Framework.cpp
        Framework.h
        myApp.cpp)
