cmake_minimum_required(VERSION 3.15)

#project(demo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#include_directories(./include)

#set(SOURCE_FILES main.cpp ./source/QuadEqu.cpp)
set(SOURCE_FILES main.cpp)
#set(HEADER_FILES QuadEqu.h)

add_executable(demo ${SOURCE_FILES})