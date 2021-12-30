//
// Created by mrerzincan on 30.12.21.
//

#include <gtest/gtest.h>
#include "TicTacToeField.h"

TEST(TicTacToeField, changeFieldValue) {
    TicTacToeField field;
    int row = 0;
    int column = 0;
    int value = 1;
    field.changeFieldValue(row, column, value);
    testing::internal::CaptureStdout();
    field.displayField();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output, "1\t0\t0\t\n0\t0\t0\t\n0\t0\t0\t\n");
}

TEST(TicTacToeField, checkFieldForWinner) {
    TicTacToeField field;

    EXPECT_EQ(field.checkFieldForWinner(), false);
}