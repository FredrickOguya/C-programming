/*
Recap Challenge #1

Let's recap variables in C with some challenges!


Challenge

Easy
Write a program that initializes the following variables:

k of type int and value 180
half of type float and value 0.5
a of type char and value 'c'
The variables can be initialized in any order.


Hints

Hint 1
Revealed

Don't forget ; at the end of each line.

Hint 2
Revealed

Check if the types match the names and values.

Hint 3
Revealed

The first line should be:

int k = 180;

Hint 4
Revealed

The second line should be:

float half = 0.5;

Hint 5
Revealed

What should be the third line? If you are stuck, try to reset to the default code and start from the beginning.
*/
#include <stdio.h>

int main() {
    // Write code here
    int k = 180;
    float half = 0.5;
    char a = 'c';
    // Don't change below this line
    printf("k = %d, half = %2.1f, a = %c", k, half, a);
    return 0;
};