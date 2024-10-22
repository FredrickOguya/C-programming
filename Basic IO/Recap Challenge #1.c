/*
Challenge

Easy
Write a program that:

prints "Enter your age:"
prints "\n" (new line)
Gets input from the user, one integer (the user's age)
calculates the difference between the user's age to 120. For example: for age 32, 88 will be calculated.
prints "You are {x} years till 120" where {x} is result of the calculation from 3. 
The program goal is to calculate the number of years remaining till 120 years :)


Hints

Hint 1
Revealed

For the first step use,

printf("Enter your age:");
Hint 2
Revealed

For the third step use,

scanf("&d", &age);
Where age is a variable you should declare before!

Hint 3
Revealed

for the last step use,

printf("You are %d years till 120", res);
Where res is a variable that holds the result of the calculation from step 4.
*/
#include <stdio.h>

int main() {
    // Write code here
    printf("Enter your age:");
    printf("\n");
    int age;
    scanf("%d",&age);
    int dif = 120 - age;

    printf("You are %d years till 120",dif);
    return 0;
};