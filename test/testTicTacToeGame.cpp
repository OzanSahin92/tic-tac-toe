//
// Created by mrerzincan on 30.12.21.
//

#include <gtest/gtest.h>
#include "TicTacToeGame.h"

TEST(TicTacToeGame, play) {
    TicTacToeGame game;
    int row = 0;
    int column = 0;
    testing::internal::CaptureStdout();
    game.play(row, column);
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "1\t0\t0\t\n0\t0\t0\t\n0\t0\t0\t\n");
}

TEST(TicTacToeGame, isPlayerOne) {
    TicTacToeGame game;

    EXPECT_EQ(game.isPlayerOne(), true);
}

TEST(TicTacToeGame, isPosValidTrue) {
    TicTacToeGame game;
    int row = 0;
    int col = 0;

    EXPECT_EQ(game.isPosValid(row, col), true);
}

TEST(TicTacToeGame, isPosValidFalse) {
    TicTacToeGame game;
    int row = 5;
    int col = 5;

    EXPECT_EQ(game.isPosValid(row, col), false);
}

TEST(TicTacToeGame, isGameFinished) {
    TicTacToeGame game;

    EXPECT_EQ(game.isGameFinished(), false);
}