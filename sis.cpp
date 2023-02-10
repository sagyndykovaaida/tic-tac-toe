#include <iostream>
using namespace std;
const int N = 3;

bool isDraw(char board[N][N]) {
    // Check rows(horizontal)
    for (int i = 0; i < N; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
            return false;
        }
    }

    // Check columns(vertical)
    for (int i = 0; i < N; i++) {
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
            return false;
        }
    }

    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
        return false;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
        return false;
    }

    // Check all
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }

    return true;
}

int main() {
    //char board[N][N] = { {'X', 'O', 'X'},
                        //{'O', 'X', 'O'},
                        //{'X', 'O', 'X'} };

    char board[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> board[i][j];
        }
    }


    if (isDraw(board)) {
        cout << "Yes(draw)" << std::endl;
    }
    else {
        cout << "No" << std::endl;
    }

    return 0;
}