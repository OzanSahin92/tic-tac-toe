//
// Created by mrerzincan on 01.01.21.
//

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

TicTacToeGame::~TicTacToeGame() = default;
