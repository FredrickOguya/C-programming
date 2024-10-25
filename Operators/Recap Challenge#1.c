/*
Recap Challenge #1


Challenge

Easy
Write a program that

Initializes two variables of type int, a and b, with the values 5 and 3
Initializes variable c, which is the sum of a and b (what is the type for this variable?)
Initialized variable d that holds whether a is bigger than c - 0 or 1 (what is the type for this variable?)

Hints

Hint 1
Revealed

c and d should be of type int
*/
#include <stdio.h>

int main(){
    int a=5,b=3,c,d;

    c= a+b;
    d=a>c;

    printf("a = %d\nb = %d\nc = %d\nd = %d\n",a,b,c,d);
}