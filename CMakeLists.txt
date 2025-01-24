cmake_minimum_required(VERSION 3.15)

project(demo LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_definitions(-DGTEST_LANGUAGE_CXX11)

include_directories(./include)
include_directories(/usr/include)

set(SOURCE_FILES ./tests/main.cpp ./source/QuadEqu.cpp ./tests/test1.cpp)

enable_testing()

find_package(Threads REQUIRED)
find_package(GTest REQUIRED)



add_executable(test1 ${SOURCE_FILES})
add_test(NAME test1 COMMAND test1)
target_link_libraries(test1 PRIVATE ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES} Threads::Threads)