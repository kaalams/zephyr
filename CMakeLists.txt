cmake_minimum_required(VERSION 3.23)
project(zephyr)

set(CMAKE_CXX_STANDARD 17)

add_executable(zephyr main.cpp net/Socket.cpp net/Socket.h)
