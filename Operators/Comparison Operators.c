/*
Comparison operators are used to compare two operands.

Sometimes we need to check whether an operand is bigger/smaller/... than another operand. The following table shows possible operators for comparison:

Operator	Meaning	Example
==	Equal	1 == 2 return false
!=	Not Equal	1 != 2 return true
>	Greater Then	1 > 2 return false
<	Lower Then	1 < 2 return true
>=	Greater or Equal	1 >= 2 return false
<=	Lower or Equal	1 <= 2 return true
The relational operator returns 1 (true) if the relationship holds or 0 (false) otherwise.

int var1 = 13;
int var2 = 12;
int var3 = var1 != var2;
In this example, we combine the assignment operator with relational operator !=, what does var3 hold?

var3 holds 1 (true).


Quiz

2 Questions

Done


Challenge

Easy
Write a program that initializes two variables n1 and n2 of type int with the values 8 and 9 and then initializes another variable n3 of type int which holds whether n1 is equal to n2.


Hints

Hint 1
Revealed

To make n3 hold, whether n1 is equal to n2,

int n3 = n1 == n2;
The following will also work,

int n3;
n3 = n1 == n2;
Don't forget to initialize n1 and n2 before!


Solution

Solution
Revealed

#include <stdio.h>

int main() {
    int n1 = 8;
    int n2 = 9;
    int n3 = n1 == n2;
    
    // Don't change below this line
    printf("n1 = %d, n2 = %d, n3 = %d", n1, n2, n3);
    return 0;
};
*/
#include <stdio.h>

int main() {
    // Write code here
    int n1 = 8;
    int n2 = 9;
    int n3 = n1==n2;
    // Don't change below this line
    printf("n1 = %d\nn2 = %d\nn3 = %d\n", n1, n2, n3);
    return 0;
};