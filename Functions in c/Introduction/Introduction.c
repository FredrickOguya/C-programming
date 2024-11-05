/*
Introduction

If variables and constants store the state of the program, then functions determine its actions. Essentially, a function represents a named piece of code that can be reused in various parts of the program.

The syntax to create a function in C is as follows:

type function_name(parameters)
{ 
    instructions to be executed
}
The first line is the function's signature. It starts with the return type, which tells what type of value the function will return. If the function doesn't return any value, the return type is void.

Next is the function's name, which is like a variable name.

After the name, you list the parameters inside parentheses. If the function has no parameters, use empty parentheses.

Then, inside curly braces, you write the instructions for the function to execute.

Let's see an example:

void first_function()
{
   printf("Hello Coddy.tech!\n");
}
In this example, the function is of type void, which means it doesn't return anything. It has no parameters, so we use empty parentheses after the function name (first_function). This function simply prints "Hello Coddy.tech!" to the console.

Now that we have defined the function, the second part is the execution. If we define a function and do not call it, it won't execute, so we need to call it.

To call a function in C, we use the syntax:

function_name(arguments)
After the function name, the parentheses contain the values for the function parameters. Since our first function has no parameters, we can call it like this:

first_function();
And the whole program should be like this:

#include <stdio.h>
void first_function() {
   printf("Hello Coddy.tech!\n");
}
int main() {
   first_function();
   return 0;
}
The output will be:

Hello Coddy.tech!

Challenge

Easy
In the given code, define a function called display_info that displays the following text:

name: Coddy.tech
language: C language
title: Functions
Call the function in the main function.

Call the function in the main function.


Solution

Solution
Revealed

#include <stdio.h>

// Function definition
void display_info() {
    printf("name: Coddy.tech\n");
    printf("language: C language\n");
    printf("title: Functions\n");
}

int main() {
    // Calling the function 
    display_info();
    return 0;
}

*/

#include <stdio.h>

void display_info()
{
    printf("name: Coddy.tech\nlanguage: C language\ntitle: Functions\n");
}
int main(){
    display_info();
}