/*
Now let's see how to print our variables (int, float or char).

To print an int variable,

int x = 3;
printf("%d", x);
Notice that we added the variable we want to print after it.

The combination %d , will print a variable of type int. 

The combination %f , will print a variable of type float.

The combination %c , will print a variable of type char.  

To print multiple variables, add them all as below.

int a = 1;
int b = 2;
int c = 3;
printf("%d + %d = %d", a, b, c);
1 + 2 = 3 will be printed!

The order is important, in this example,

int a = 1;
int b = 2;
int c = 3;
printf("%d + %d = %d", c, a, b);
3 + 1 = 2 will be printed.


Quiz

3 Questions

Done


Challenge

Easy
You are given a program that gets input from the user, and you save it in the variable num.

Your task is to print the num variable in the following format (if num equals 3, for example):

num = 3


Hints

Hint 1
Revealed

printf("num = %...", ...);

Solution

Solution
Revealed

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    // Don't change above this line

    printf("num = %d", num);
    return 0;
};
*/
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    // Don't change above this line
    printf("num = %d", num);
    // Write code here
    return 0;
};