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

int main(){
    char A1,A2,A3,B1,B2,B3,C1,C2,C3;
    printf("Enter the Characters\n");
    scanf("%c %c %c %c %c %c %c %c %c",&A1,&A2,&A3,&B1,&B2,&B3,&C1,&C2,&C3);
    printf("%c %c %c\n%c %c %c\n%c %c %c\n",A1,A2,A3,B1,B2,B3,C1,C2,C3);

    if(B1&&B2&&B3=='x'){
        printf("x is the winner\n");
    }else if(A2&&B2&&C2=='x'){
        printf("x is the winner\n");
    }else if(A1&&B2&&C3=='x'){
        printf("x is the winner\n");
    }else if(A3&&B2&&C1=='x'){
        printf("x is the winner\n");
    }else if(B1&&B2&&B3=='o'){
        printf("o is the winner\n");
    }else if(A2&&B2&&C2=='o'){
        printf("o is the winner\n");
    }else if(A1&&B2&&C3=='o'){
        printf("o is the winner\n");
    }else if(A3&&B2&&C1=='o'){
        printf("o is the winner\n");
    }
    return 0;

}