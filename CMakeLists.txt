cmake_minimum_required(VERSION 3.26)
project(T17_HW)

set(CMAKE_CXX_STANDARD 17)

add_executable(T17_HW main.cpp
        Publication.cpp
        Publication.h
        Date.cpp
        Book.cpp)
