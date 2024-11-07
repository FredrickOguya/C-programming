/*
Value Vs Pointer

When we pass parameters to a function, we can do it in two ways: by value or by pointer. Let's take a simple example to understand what we mean by value and pointer:

#include <stdio.h>

void sum(int a) {
   a = a + 1;
   printf("sum function: %d\n", a);
}

int main(void) {
   int a = 10;
   sum(a);
   printf("main function: %d\n", a);
   return 0;
}
The output:

sum function: 11 
main function: 10 
As you can see in this example, we use the value, so the variable a's value didn't change. However, if we need to access the variable and change its value, we can use a pointer as a parameter.

#include <stdio.h>

void sum(int *a) {
   *a = *a + 1;
   printf("sum function: %d\n", *a);
}

int main(void) {
   int a = 10;
   sum(&a);
   printf("main function: %d\n", a);
   return 0;
}
Since the function now accepts a pointer as the parameter, when it is called, you must pass the address of the variable:

sum(&a);
The output:

sum function: 11 
main function: 11 

Challenge

Easy
In the given code, we define a variable called y.

Write a function square that takes a pointer to an integer as its parameter.
Inside this function, square the value of the variable to which the pointer points and print its value.
Print the value of the variable in both the square function and the main function to show that the original variable has been changed.

Solution

Solution
Revealed

#include <stdio.h>


// square Function to square value by pointer
void square(int *a) {
    *a = *a * *a;
    printf("square function: %d\n", *a);
}

int main(void) {

    int a = 200;
    
    // Call square function
    square(&a);
    // Print the original variable 
    printf("main function after square: %d\n", a);
    
    return 0;
}
*/

#include <stdio.h>

void square(int *a){
  *a *= *a;

  printf("square function: %d\n",*a);
}


int main (){
    int a = 200;

    square(&a);
    printf("main function after square: %d\n",a);
}