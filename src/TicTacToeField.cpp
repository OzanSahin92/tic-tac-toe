//
// Created by mrerzincan on 01.01.21.
//

#include "TicTacToeField.h"
#include <iostream>

using namespace std;

TicTacToeField::TicTacToeField() : _field({{0, 0, 0},
                                           {0, 0, 0},
                                           {0, 0, 0}}) {}

void TicTacToeField::displayField() {
    for (auto &row: _field) {
        for (auto &element: row) {
            cout << element << "\t";
        }
        cout << endl;
    }
}

void TicTacToeField::changeFieldValue(const int &row, const int &column, const int &value) {
    _field[row][column] = value;
}

bool TicTacToeField::checkFieldForWinner() {
    // check rows
    for (int i = 0; i < 3; i++) {
        if ((_field[i][0] == _field[i][1] == _field[i][2]) && (_field[i][0] != 0) && (_field[i][1] != 0) &&
            (_field[i][2] != 0)) {
            return true;
        }
    }
    // check columns
    for (int i = 0; i < 3; i++) {
        if ((_field[0][i] == _field[1][i] == _field[2][i]) && (_field[0][i] != 0) && (_field[1][i] != 0) &&
            (_field[2][i] != 0)) {
            return true;
        }
    }
    // check diagonals
    if ((_field[0][0] == _field[1][1] == _field[2][2]) && (_field[0][0] != 0) && (_field[1][1] != 0) &&
        (_field[2][2] != 0)) {
        return true;
    }
    if ((_field[0][2] == _field[1][1] == _field[2][0]) && (_field[0][2] != 0) && (_field[1][1] != 0) &&
        (_field[2][0] != 0)) {
        return true;
    }

    return false;
}

TicTacToeField::~TicTacToeField() = default;
