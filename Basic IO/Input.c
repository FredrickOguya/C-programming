/*
Let's learn how to get input from the user.

As with output, we will use the following patterns,

Pattern	type
%d	int
%f	float
%c	char
To get input from the user, use scanf,

int x;
scanf("%d", &x);
After the second line, the variable x will hold the integer that the user entered.

Notice: it's necessary to add ampersand (&) before the variable we want to load the input into.

To get multiple inputs from the user, just use the right format, for example,

char c1;
char c2;
scanf("%c , %c", &c1, &c2);
The above example will load two variables with the input from the user, if for example the input is a , b, c1 will hold 'a' and c2 will hold 'b'.


Quiz

1 Question

Done

Challenge

Easy
Write a program that gets input from the user in the format: %d %d (integer space integer), and outputs the sum of the two numbers.

You will need to store the two integers in variables and print the calculation using printf


Hints

Hint 1
Revealed

For variables n1 and n2 (of type int), 

scanf("%d %d", &n1, &n2);
Hint 2
Revealed

To print, you can use,

printf("%d", n3);
Don't forget to initialize n3 with the sum of n1 and n2!


Solution

Solution
Revealed

#include <stdio.h>

int main() {
    int n1;
    int n2;
    scanf("%d %d", &n1, &n2);
    
    int n3 = n1 + n2;
    printf("%d", n3);
    return 0;
};
*/
#include <stdio.h>

int main() {
    // Write code here
    int n1;
    int n2;
    printf("Enter the numbers to be added: \n");
    scanf("%d %d",&n1,&n2);
    int n3 =n1 +n2;

    printf("%d + %d = %d\n",n1,n2,n3);
    return 0;
};