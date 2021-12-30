//
// Created by mrerzincan on 01.01.21.
//

#ifndef TICTACTOE_TICTACTOEGAME_H
#define TICTACTOE_TICTACTOEGAME_H

#include "TicTacToeField.h"


class TicTacToeGame {
public:
    TicTacToeGame();

    void startGame();

    void play(const int &row, const int &column);

    bool isPlayerOne() const;

    const bool isPosValid(const int &row, const int &column);

    bool isGameFinished();

    virtual ~TicTacToeGame();

private:
    TicTacToeField _field;
    bool _playerOne;
};


#endif //TICTACTOE_TICTACTOEGAME_H
