/*
Integers

Variables are containers of values/data, They are the building blocks of the code.

They are used to store, manipulate, present, or calculate data. In short, a variable is like a memory unit that we can access by typing the name of the variable. 

Each variable has a type and a name. The type is responsible for letting the program know how to handle the data. There are many types, such as numbers, characters and so on. 

In order to declare a variable, we use the following syntax:

type name;
In order to declare and store/save/Initialize value inside a variable, we write:

type name = value;
Let's discuss our first type:

int - whole number, for example: 1 or -2

If a variable is an int then it is not possible to save anything else in that variable.

In the following example, we initialize a variable of type int with the name a and the value 3.

int a = 3;
Notice that each line in C ends with ; (there are some exceptions, which we will get to)


Quiz

3 Questions

Done


Challenge

Easy
Write a program that initializes a variable of type int with the name var and the value 5.


*/
#include <stdio.h>

int main() {
    int var = 5;

    // Don't change below this line
    printf("var = %d", var);
    return 0;
};