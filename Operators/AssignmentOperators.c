/*
We have already seen the basic assignment operator when initializing variables with =,

int num = 100; // use of assignment operator
There are more types of assignment operators in C in order to make operations faster,

Operator	Example	Equivalent to
=	a = b	a = b
+=	a += b	a = a + b
-=	a -= b	a = a - b
*=	a *= b	a = a * b
/=	a /= b	a = a / b
%=	a %= b	a = a % b

Quiz

3 Questions

Done


Challenge

Easy
You are given a program, refactor it to work faster!

Anywhere you can change the arithmetic operation with a faster assignment operator, do it.

 

Note: After the declaration of a variable, for example, int a = ...;, you can just use it without using it type again a = ...;.


Hints

Hint 1
Revealed

a = a + 3;
Can also be written,

a += 3;
Hint 2
Revealed

c = a * c;
Can also be written,

c *= a;

Solution

Solution
Revealed

#include <stdio.h>

int main() {
    int a = 3;
    int b = 4;
    int c = 5;
    a += 3;
    b -= a;
    c *= a;
    
    // Don't change below this line
    printf("a = %d, b = %d, c = %d", a, b, c);
    return 0;
};
*/
#include <stdio.h>

int main() {
    int a = 3;
    int b = 4;
    int c = 5;
    a += 3;
    b -= a;
    c *= a;
    
    // Don't change below this line
    printf("a = %d, b = %d, c = %d", a, b, c);
    return 0;
}