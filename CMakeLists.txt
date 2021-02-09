cmake_minimum_required(VERSION 3.17)
project(webservconf)

set(CMAKE_CXX_STANDARD 98)

add_executable(webservconf main.cpp Parser.cpp Parser.hpp)