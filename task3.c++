#include <iostream>
using namespace std;

char board[3][3];

void initializeBoard() {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            board[i][j] = ' ';
}

void displayBoard() {
    cout << "\n";
    for (int i = 0; i < 3; ++i) {
        cout << " ";
        for (int j = 0; j < 3; ++j) {
            cout << (board[i][j] == ' ' ? '_' : board[i][j]);
            if (j < 2) cout << " | ";
        }
        cout << "\n";
        if (i < 2) cout << "---|---|---\n";
    }
    cout << "\n";
}

bool makeMove(char player, int row, int col) {
    row--; col--; 
    if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') 
        return false;
    board[row][col] = player;
    return true;
}

bool checkWin(char player) {
   
    for (int i = 0; i < 3; ++i)
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player))
            return true;

    
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player))
        return true;

    return false;
}

bool isDraw() {
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            if (board[i][j] == ' ')
                return false;
    return true;
}

int main() {
    initializeBoard();
    char player = 'X';
    int row, col;

    while (true) {
        displayBoard();
        cout << "Player " << player << ", enter row and column (1-3): ";
        cin >> row >> col;
        if (!makeMove(player, row, col)) {
            cout << "Invalid move—try again.\n";
            continue;
        }
        if (checkWin(player)) {
            displayBoard();
            cout << "Player " << player << " wins!\n";
            break;
        }
        if (isDraw()) {
            displayBoard();
            cout << "It's a draw!\n";
            break;
        }
        player = (player == 'X') ? 'O' : 'X';
    }

    return 0;
}

