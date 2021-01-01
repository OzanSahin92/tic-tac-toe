//
// Created by mrerzincan on 01.01.21.
//

#ifndef TICTACTOE_TICTACTOEFIELD_H
#define TICTACTOE_TICTACTOEFIELD_H

#include <vector>
#include <ostream>

class TicTacToeField {
public:
    TicTacToeField();

    void displayField();

    void changeFieldValue(const int &row, const int &column, const int &value);

    virtual ~TicTacToeField();

private:
    std::vector<std::vector<int>> _field;
};


#endif //TICTACTOE_TICTACTOEFIELD_H
