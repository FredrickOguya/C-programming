/*
Commonly used operators are the increment and decrement operators.

++ - increment number (int or float) value by 1
-- - decrement number value by 1
int a = 7;
a++;
In the following example, we increase a by 1, a holds the value 8 at the end.

Here is another example of decrement, b will hold 2.5 in the end,

float b = 3.5;
b--;
We will see the use of these operators when we learn about loops!


Quiz

1 Question

Done


Challenge

Easy
initialize a variable count of type int with a value of 0 and increment its value twice.


Hints

Hint 1
Revealed

You will need two lines of count++;


Solution

Solution
Revealed

#include <stdio.h>

int main() {
    int count = 0;
    count++;
    count++;
    
    // Don't change below this line
    printf("count = %d", count);
    return 0;
};
*/

#include <stdio.h>

int main() {
    // Write code here
    int count = 0;
    count++;
    count++;
    // Don't change below this line
    printf("count = %d\n", count);
    return 0;
};