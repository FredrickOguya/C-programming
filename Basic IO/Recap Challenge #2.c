/*
Let's improve our calculator from the decision making chapter!


Challenge

Medium
Write a program that acts as a calculator.

Gets input from the user in the format: "%c %f %f" (char and two floats)
Calculates the result from the operation (the char) and the two floats
Prints the result from 2.
Possible cases for the char (the operation) will be +, -, *, /

Tips:

Don't forget ampersand (&) when getting input!
The result of the calculation should also be a float
Steps 2 and 3 can be combined (not mandatory)
Examples,

Input: + 1 3

Ouput: 4

Explanation: 4 = 1 + 3

 

Input: / 3 2

Ouput: 1.5

Explanation: 1,5 = 3 / 2

 

Input: - 2.5 3.3

Ouput: -0.8

Explanation: -0.8 = 2.5 - 3.3


Hints

Hint 1
Revealed

Don't forget ampersand (&) when getting input!
*/

#include <stdio.h>

int main() {
    // Write code here
    char op;
    float num1;
    float num2;
    float ans;
    scanf("%c %f %f",&op, &num1,&num2);

    if(op == '+')
    {
        ans = num1+num2;
    }
    else if(op == '-')
    {
        ans = num1-num2;
    }
    else if(op == '/')
    {
        ans = num1/num2;
    }
    else if(op == '*')
    {
        ans = num1*num2;
    }
    printf("%f",ans);
    return 0;
};