//
// Created by mrerzincan on 01.01.21.
//

#include <iostream>
#include <unistd.h>

#include "TicTacToeGame.h"


TicTacToeGame::TicTacToeGame() : _field(), _playerOne(true) {}

void TicTacToeGame::play(const int &row, const int &column) {
    if (_playerOne) {
        _field.changeFieldValue(row, column, 1);
        _playerOne = false;
    } else {
        _field.changeFieldValue(row, column, 2);
        _playerOne = true;
    }
    _field.displayField();
}

bool TicTacToeGame::isPlayerOne() const {
    return _playerOne;
}

const bool TicTacToeGame::isPosValid(const int &row, const int &column) {
    if (((row < 0) || (row > 2)) || ((column < 0) || (column > 2))) {
        return false;
    }
    return true;
}

bool TicTacToeGame::isGameFinished() {
    return _field.checkFieldForWinner();
}

void TicTacToeGame::startGame() {
    int row, column;
    std::cout << "TicTacToe-Game has started!" << std::endl;
    while (true) {
        if (isPlayerOne()) {
            std::cout << "It is player one's turn!" << std::endl;
        } else {
            std::cout << "It is player two's turn!" << std::endl;
        }
        std::cout << "Please enter row and column, where you would like to place your mark!" << std::endl;
        std::cin >> row >> column;
        while (std::cin.fail()) {
            std::cout << "Error! Please enter one of the following numbers as row or column:\n"
                         "0, 1 or 2" << std::endl;
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cout << "Please enter row and column, where you would like to place your mark!" << std::endl;
            std::cin >> row >> column;
        }
        if (isPosValid(row, column)) {
            play(row, column);
            if (isGameFinished()) {
                if (!isPlayerOne()) {
                    std::cout << "Player One won the Game!" << std::endl;
                    break;
                } else {
                    std::cout << "Player Two won the Game!" << std::endl;
                    break;
                }
            }
        } else {
            std::cout << "Please enter valid row (0-2) and column (0-2) values!" << std::endl;
        }
        usleep(500000);
    }
}

TicTacToeGame::~TicTacToeGame() = default;
