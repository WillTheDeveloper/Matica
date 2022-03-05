cmake_minimum_required(VERSION 3.21)
project(Matica)

set(CMAKE_CXX_STANDARD 20)

add_executable(Matica main.cpp basics.cpp headers/basics.h matrices.cpp headers/matrices.h)
