cmake_minimum_required(VERSION 3.17)
project(webservconf)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Werror")
add_executable(webservconf main.cpp Parser.cpp Parser.hpp)