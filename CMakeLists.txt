cmake_minimum_required(VERSION 3.7)
project(cProject)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES   callback.c)
add_executable(cProject ${SOURCE_FILES})