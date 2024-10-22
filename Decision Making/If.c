/*
An important part of programming is decision making, choosing between a couple of paths.

To make a simple decision in C, we use if in the following syntax,

if (condition) {
    // body of statement
}
When the condition is met - returns 1 (true), the program enters the body of the statement between the { }.

int num = 12;
if (num > 10) {
    printf("num is bigger than 10!");
}
In the above example, the program enters the body because num is greater than 10, therefore the condition is met.

int num = 9;
if (num > 10) {
    printf("num is bigger than 10!");
}
In the above example, the program doesn't enter the body of the if statement! (num is not greater than 10)

Note: the semicolon (;) is not mandatory after the closing }!


Quiz

3 Questions

Done


Challenge

Easy
You are given a program.

The variables a and b are missing values, fill them in so the code inside the if statement (line 8) will be executed!

Bonus: try to find more than one solution!


Solution

Solution
Revealed

#include <stdio.h>

int main() {
    int a = 3;
    int b = 2;
    
    // Don't change below this line
    if (a >= b) {
        printf("You are here!");
    }
    return 0;
};
 */

#include <stdio.h>

int main() {
    int a = 1;
    int b = 1;
    
    // Don't change below this line
    if (a >= b) {
        printf("You are here!");
    }
    return 0;
};