#include <iostream>
#include "TicTacToeGame.h"
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
        if (startGame.isPosValid(row, column)) {
            startGame.play(row, column);
            if (startGame.isGameFinished()) {
                if (startGame.isPlayerOne()) {
                    cout << "Player One won the Game!" << endl;
                    break;
                }
                else {
                    cout << "Player Two won the Game!" << endl;
                    break;
                }
            }
        }
        else {
            cout << "Please enter valid row (0-2) and column (0-2) values!" << endl;
        }
        usleep(1000000);
    }

    return EXIT_SUCCESS;
}
