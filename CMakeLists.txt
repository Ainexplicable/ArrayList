cmake_minimum_required(VERSION 3.22)
project(ArrayList C)

set(CMAKE_C_STANDARD 17)

add_executable(ArrayList main.c ArrayList.c ArrayList.h)
