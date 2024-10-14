/*
char - single character, for example: 'a' or '?'

The character must be surrounded by single quotes ''.

In the following example, we initialize a variable of type char with the name dollar and the value '$'.

char dollar = '$';

Quiz

3 Questions

Done


Challenge

Easy
Write a program that initializes a variable of type char with the name u and the value 'u' and a variable of type char with the name a and the value 'a'.

In order to initialize multiple variables, just start from a new line and make another declaration, for example,

int a = 3;
int b = 9;
*/
#include <stdio.h>

int main() {
    char u = 'u';
    char a = 'a';
    
    // Don't change below this line
    printf("u = %c, a = %c", u, a);
    return 0;
};