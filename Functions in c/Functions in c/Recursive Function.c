/*
Recursive Function

A recursive function is a function that keeps calling itself.

A famous example of this function is when we need to calculate the factorial of a number. 

The formula for this is n!=1×2×…×n. 

To find the factorial of a number, we need to multiply all the numbers from 1 to n. 

For example:

4!=1×2×3×4=24
We can define a recursive function like this:

int fact(int n) {
   if (n == 1) {
       return 1;
   }
   return n * fact(n - 1);
}
Imagine you have a set of stairs. To start climbing, you begin at the ground floor (step 0). In a recursive function, this starting point is called the base case. It's where the function stops calling itself and returns a value.

In the factorial example, the base case is when nnn (the number) is 1. The factorial of 1 is simply 1, so the function returns 1 without any further calculations.

First, there is a check to see whether the number is equal to one:

if (n == 1) {
   return 1;
}
Recursive Calls:

 

For any number greater than 1, the function relies on smaller versions of itself. It calls itself with n−1 (one step down the stairs). This is the recursive call:

return n * fact(n - 1);
Think of it like climbing stairs. To reach step 5, you first need to reach step 4, then step 3, and so on. Each recursive call is like taking one step.


Challenge

Easy
Define the Recursive Function:

Write a function called countdown that takes an integer parameter n.
Inside this function, print the current value of n.
If n is greater than 0, recursively call countdown with n - 1.
If n is 0 or less, print "Blastoff!".
Example: If the number is 3, the output should be like this:

3
2
1
Blastoff!
 


Solution

Solution
Revealed

#include <stdio.h>
// Define the function countdown
void countdown(int n) {
  if (n > 0) {
    printf("%d\n", n);
    countdown(n - 1); 
  } else {
    printf("Blastoff!\n");
  }
}

int main() {
  int start = 5;
  // Call the function
  
  countdown(start);

  return 0;
}
*/

#include <stdio.h>

// Define the function countdown
void countdown (int n){
    
    if(n<=0){
        printf("Blastoff!\n");
        return;
    }
    
    printf("%d\n",n);
    countdown(n-1);
}


int main() {
  int start = 5;
  // Call the function
  countdown(5);
 
  return 0;
}