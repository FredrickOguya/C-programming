/*
Function Parameters

A function can take parameters to get data from outside and use it during its execution. The parameters are listed in parentheses after the function name like this:

type function_name(type parameter1, type parameter2, ... type parameterN)
Each parameter has a type and a name, separated by commas.

For example, to display different messages on the console, we can define a function that takes a string as a parameter:

#include <stdio.h>

void hello(char str[])
{
   printf("%s\n", str);
}

int main(void)
{
   hello("Welcome to Coddy");
   hello("Coddy.tech");
   hello("C with Coddy");
}
The function hello() takes one parameter str of type char[]. This parameter is called a formal parameter.

In the main function, we call hello() three times with different strings: "Welcome to Coddy", "Coddy.tech", and "C with Coddy". These strings are called arguments. This will print:

Welcome to Coddy
Coddy.tech
C with Coddy
To use more parameters, separate them with commas like this:

void hello(int a, int b)
{
   // function body
}

Challenge

Easy
In the given code, define a function called sum that takes two parameters, a and b. The function will print the sum of a and b.


Solution

Solution
Revealed

#include <stdio.h>

// Define the sum function here

void sum(int a, int b)
{
    printf("%d\n", a + b);
}

int main(void)
{
    // Example don't change this !
    sum(15, 200);  
}
*/
#include <stdio.h>

// Define the sum function here
void sum(int a,int b){
    printf("%d\n",a+b);
}


int main(void)
{
    // Example don't change this !
    sum(15, 200);  
}
