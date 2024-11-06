/*
Return Value

A function can return a result to be used outside the function. To return a result, use the return keyword like this:

return;
return expression;
The first form (return;) is used for functions that do not return any value (i.e., they have a return type of void).

The second form (return expression;) is used for functions that return a value. The expression is the value to be returned.

Let's look at an example:

void sum(int a)
{
  printf("%d + %d = %d \n", a, 2, a + 2);
}
This function doesn't explicitly use return, but the compiler adds it automatically at the end.

void plus(int a)
{
  printf("%d + %d = %d \n", a, 2, a + 2);
  return;
}
A function can also return a specific value. For example:

int plus(int a, int b)
{
   return a + b;
}
Now, the plus function returns an int. When a function's return type is not void, it must return a value of that type. To return a value, use return and specify the value.

If a function returns a value, you can store the result in a variable like this:

int result = plus(3, 4);


Challenge

Easy
Write a program to print the multiplication of two numbers:

Define a function called multiply that takes two parameters, x and y, of type int and returns the result of the multiplication of x and y.
In the main function, define a variable z that will store the result of passing the numbers 9 and 10 to the multiply function. 
Print the value of z to the screen.

Solution

Solution
Revealed

#include <stdio.h>

// Define the function 
int multiply(int x, int y)
{
    return x * y;
}

int main(void)
{
    // Define the variable z 
    int z = multiply(9, 10);  
    
    // Print the value of z 
    printf("%d\n", z);
    return 0;
}
*/
#include <stdio.h>

// Define the function 
int multiply(int x,int y){
    return x*y;
}


int main(void)
{
    // Define the variable z 
    int z = multiply(9,10);
    printf("%d\n",z);
    
    // Print the value of z 
    
    
    return 0;
}
