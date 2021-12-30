cmake_minimum_required(VERSION 3.16)
project(TicTacToe)

set(CMAKE_CXX_STANDARD 17)

find_package(GTest REQUIRED)

include_directories(include/)
include_directories(${GTEST_INCLUDE_DIRS})

file(GLOB SrcFiles src/*.cpp )

add_executable(TicTacToe ${SrcFiles})

add_subdirectory(test)