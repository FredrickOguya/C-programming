/*
Letter Counter


Challenge

Easy
Write a program that gets as input a "stream" of characters (chars one after one) and outputs the number of characters entered, excluding spaces.

A string of characters is always terminated by the character '$'.

You should not count spaces!

Examples,

Input: bob$

Output: 3

 

Input: long name$

Output: 8

Explanation: There are nine characters, but one of them is a space.


Hints

Hint 1
Revealed

You should loop over the scanf function until the character you encounter is '$' (a space).

Some pseudo-code (not real code),

char c;
while (c is not '$') {
    scanf("%c", &c);
}
Don't forget to count all the non-space characters!
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int ch = getchar();
    int cha = 0;
    while (ch!= '$')
    {
        if(ch!=' ' && ch != '\n'){
            cha++;
        }
        ch = getchar();
    }
    printf("%d",cha);
    return 0;
}