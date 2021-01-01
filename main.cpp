#include <iostream>
#include "include//TicTacToeGame.h"
#include <unistd.h>

using namespace std;

int main() {
    TicTacToeGame startGame;
    int row, column;
    cout << "TicTacToe-Game has started!" << endl;
    while(true) {
        if (startGame.isPlayerOne()) {
            cout << "It is player one's turn!" << endl;
        } else {
            cout << "It is player two's turn!" << endl;
        }
        cout << "Please enter row and column, where you would like to place your mark!" << endl;
        cin >> row >> column;
        startGame.play(row, column);
        usleep(1000000);
    }

    return 0;
}
