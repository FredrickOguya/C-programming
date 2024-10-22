/*
Challenge

Easy
You are given a program that gets input from the user and saves it in the variable num.

Your task is to add code that initializes a new variable x that will hold 5 if num is bigger than 5, otherwise 0.


Hints

Hint 1
Revealed

This is part of the solution, complete the missing,

int x;
if (x > 5) {
    x = ...
}
else {
    ...
}
*/

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    // Don't change above this line

    // Write code here
    int x;
    if(num>5)
    {
        x=5;
    }
    else
    {
        x=0;
    }
    
    // Don't change below this line
    printf("x = %d", x);
    return 0;
};