/*
Tic-Tac-Toe Analyzer

Tic-Tac-Toe is a famous game that is pretty simple to understand. In this challenge, we will create an analyzer for it!

Read more


Challenge

Hard
Write a program that takes an input-filled Tic-Tac-Toe board and outputs the following:

X is the winner\n if player X has a win.
O is the winner\n if player O has a win.
Draw if no player has a win!
You can assume there is no situation where both players have a win.

The input will be in a format where each row is separated by a new line and each cell of the board is separated by a space. (See more on the test cases.)

Each char (cell data) is X or O.


Hints

Hint 1
Revealed

Notice that the board always has 9 cells, so you will need to save all the data in exactly 9 variables!
*/
#include <stdio.h>

int main() {
    char board[3][3];

    // Read the board's characters
    scanf("%c %c %c\n%c %c %c\n%c %c %c\n", 
          &board[0][0], &board[0][1], &board[0][2], 
          &board[1][0], &board[1][1], &board[1][2], 
          &board[2][0], &board[2][1], &board[2][2]);

    // Check rows and columns for a winner
    for (int i = 0; i < 3; i++) {
        // Check rows
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
            printf("%c is the winner\n", board[i][0]);
            return 0;
        }

        // Check columns
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
            printf("%c is the winner\n", board[0][i]);
            return 0;
        }
    }

    // Check diagonals for a winner
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
        printf("%c is the winner\n", board[0][0]);
        return 0;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
        printf("%c is the winner\n", board[0][2]);
        return 0;
    }

    // If no winner, it's a draw
    printf("Draw\n");

    return 0;
}

