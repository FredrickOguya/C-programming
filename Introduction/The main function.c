/*
Before diving in, let's clarify something that will go with us throughout the whole course.

 

The main function

 

Quick look at the code from the last lesson (Hello World! program),

#include <stdio.h>

int main() {
    printf("Hello World!");
    return 0;
}
To run every C program, you need the main function, 

int main() {
    return 0;
}
And your code will go after the symbol { and before the return 0 statement.

int main() {
    // Write code here
    return 0;
}
The symbol // marks a comment, everything that comes after it will not be executed!

 

The first line #include <stdio.h> is currently not interesting, and it will always be added to the default code.


Quiz

3 Questions

Done


Challenge

Easy
In each lesson, you will be given the default code, as in this lesson, and you will be asked to write some code.

For this challenge, we will do it step by step.

 

Challenge:

Write a program that outputs I'm learning C with Coddy

 

steps:

delete line 4 (the comment)
insert a new line after line 3, which contains the following line:
printf("I'm learning C with Coddy");
run the code using the button "Run Code"
Notice: you can reset to the default code using the button on the top-right of the code editor
*/
#include <stdio.h>

int main() {
    printf("I'm learning C with Coddy");
    return 0;
};