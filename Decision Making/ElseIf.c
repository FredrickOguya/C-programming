/*
The if statement can have an optional else clause, which is triggered when the condition is not met. 
Use it with syntax as follows,

if (condition) {
    // executed if condition is true
}
else {
    // executed if condition is false
}
The if...else statement is used when making a decision between two alternatives. 


However, sometimes we want to alternate between more options, so we can use the else if statement as follows,

if (condition1) {
    // executed if condition1 is true
}
else if (condition2) {
    // executed if condition2 is true
}
else {
    // executed if condition1 and condition2 are false
}
It's possible to add as much else if as needed.

 

Example:

if (3 != 3) {
    // code 1
}
else if (2 > 1) {
    // code 2
}
else {
    // code 3
}
In this example, code 2 will be executed as 2 is bigger than 1 and 3 is equal to 3.


Quiz

3 Questions
Start


Challenge

Easy
You are given program which gets input from the user, their age and stores it in a variable named age.

Note: we will learn in the next few lessons how to get input from the user, currently just don't touch the code above line 6.

 

Your task is to print "Above 18" if age is greater than 18, else print "Below or equal 18".

 

As we still didn't learn how to print, here are the codes:

print "Above 18",

printf("Above 18");
print "Below or equal 18",

printf("Below or equal 18");
Check the test cases to see all the inputs and the expected outputs

Note: we will learn in the next lessons how to get input from the user, currently just don't touch the code above line 6.

 

Your task is to print "Above 18" if age is larger than 18, else print "Below or equal 18".

 

As we still didn't learn how to print here are the codes:

print "Above 18",

printf("Above 18");
print "Below or equal 18",

printf("Below or equal 18");
Check the test cases to see all the inputs and the expected outputs


Hints

Hint 1
Revealed

Use the if-else statement (insert the given codes where needed)

if (age > 18) {
    // print "Above 18"
}
else {
    // print "Below or equal 18"
}

Solution

Solution
Revealed

#include <stdio.h>

int main() {
    int age;
    scanf("%d", &age);
    // Don't touch above this line
    if (age > 18) {
        printf("Above 18");
    }
    else {
        printf("Below or equal 18");
    }
    
    return 0;
};
 */

#include <stdio.h>

int main() {
    int age;
    scanf("%d", &age);
    // Don't touch above this line
    // Write code here
    if (age>18){
        printf("Above 18");
    }
    else {
        printf("Below or equal 18");
    }
    return 0;
};