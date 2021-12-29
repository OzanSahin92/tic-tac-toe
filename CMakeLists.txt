cmake_minimum_required(VERSION 3.16)
project(TicTacToe)

set(CMAKE_CXX_STANDARD 17)

include_directories(include/)

file(GLOB SrcFiles src/*.cpp )

add_executable(TicTacToe ${SrcFiles})