cmake_minimum_required(VERSION 3.16)
project(TicTacToe)

set(CMAKE_CXX_STANDARD 17)

add_executable(TicTacToe main.cpp src/TicTacToeField.cpp include/TicTacToeField.h src/TicTacToeGame.cpp include/TicTacToeGame.h)