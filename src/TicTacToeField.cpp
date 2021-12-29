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

bool TicTacToeField::checkFieldForWinner() {
    // check rows
    int sum = 0;
    for (auto &row : _field) {
        for (auto &element : row) {
            sum += element;
        }
        if (sum == 3) {
            return true;
        }
        else if (sum == 6) {
            return true;
        }
    }
    // check columns
    sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += _field[j][i];
        }
        if (sum == 3) {
            return true;
        }
        else if (sum == 6) {
            return true;
        }
    }
    // check diagonals
    sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                sum += _field[i][j];;
            }
        }
    }
    if (sum == 3) {
        return true;
    }
    else if (sum == 6) {
        return true;
    }
    sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i + j == 2) {
                sum += _field[i][j];;
            }
        }
    }
    if (sum == 3) {
        return true;
    }
    else if (sum == 6) {
        return true;
    }

    return false;
}

TicTacToeField::~TicTacToeField() = default;
