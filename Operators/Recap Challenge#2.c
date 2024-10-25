/*
Challenge 

You are given a program.
 
The variables a, b and c are missing their values!

Your task is to fill in the right values so that variable c in line (will hold 1)
*/
#include <stdio.h>

int main () {
    int a = 1;
    int b = 0;
    int c = 0;

    //Dont change below this line
    int d = (a -b != c) && (c<a);
    printf("d = %d\n",d);
    return 0;
}