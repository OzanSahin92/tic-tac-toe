//
// Created by mrerzincan on 01.01.21.
//

#include "../include/TicTacToeField.h"
#include <iostream>

using namespace std;

TicTacToeField::TicTacToeField() : _field({{0, 0, 0},
                                           {0, 0, 0},
                                           {0, 0, 0}}) {}

void TicTacToeField::displayField() {
    for (auto &row : _field) {
        for (auto &element : row) {
            cout << element << "\t";
        }
        cout << endl;
    }
}

void TicTacToeField::changeFieldValue(const int &row, const int &column, const int &value) {
    _field[row][column] = value;
}

TicTacToeField::~TicTacToeField() = default;
