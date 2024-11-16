cmake_minimum_required(VERSION 3.29)
project(LIST)

set(CMAKE_CXX_STANDARD 26)

add_executable(LIST main.cpp
        Node.h
        List.cpp
        List.h)
