/*
Each variable has a scope, which is the part of the program where you can use it. Variables can be either global or local.

Local variables
Local variables are created inside a code block, like in a function, and they only exist there. Memory for these variables is allocated when the block starts and deallocated when the block ends, which removes the variables.

#include <stdio.h>
void message() {
   char *msg = "Coddy";
   printf("%s \n", msg);
}
int main(void) {
   char *title = "tech";
   message();
   printf("%s \n", title);
   return 0;
}
In the message function, the variable msg is defined. Similarly, the main function defines the variable title. These variables are not available outside their respective functions. For example, we cannot use the variable msg in the main function because its scope is limited to the message function.

The same principle applies to variables defined within nested code blocks such as if, else, switch, case, for, while, and do..while loops.

Global variables
Global variables are defined in the program file outside any functions. These variables can be used by any function within that file.

#include <stdio.h>
int a = 12;
void increment()
{
   a++;
   printf("a=%d \n", a);
}
int main(void)
{
   increment();          
   a++;
   printf("a=%d \n", a);    
    
   return 0;
}
The output:

a=13 
a=14 
Here, the variable a is visible to all functions because it is declared globally.

 


Challenge

Easy
Try to use the global variable:

Define a global variable called gv outside any function and assign to it the value 20. 
Modify the increment function to use this global variable. 
Write a new function decrement that decreases the global variable and prints its value. 
Print the value of the variable in the main function.
The output should be like this:

Global variable after increment: 21 
Global variable after decrement: 20 
Global variable in main: 20 

Hints

Hint 1
Revealed

To increment a variable, use ++.


Solution

Solution
Revealed

#include <stdio.h>

// Define a global variable called gv and assign it the value 20
int gv = 20;

// Modify the increment function

void increment() {
    gv++;
    printf("Global variable after increment: %d \n", gv);
}

// Define decrement function

void decrement() {
    gv--;
    printf("Global variable after decrement: %d \n", gv);
}

int main(void) {
    increment();
    decrement();
    
    // Print the variable 
    printf("Global variable in main: %d \n", gv);
    return 0;
}
*/

#include <stdio.h>

// Define a global variable called gv and assign it the value 20

int gv =20;
// Modify the increment function
void increment() {
   gv++;
    printf("Global variable after increment: %d \n", gv);
}

// Define decrement function
void decrement() {
    gv--;
    printf("Global variable after decrement: %d \n", gv);
}

int main(void) {
    
    increment();
    decrement();
    // Print the variable 
    printf("Global variable in main: %d\n",gv);
    return 0;
}
