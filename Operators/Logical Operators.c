/*
Logical operators are used to check combinations of comparisons and return 1 (true) or 0 (false).

For example, is 5 bigger than 3 and smaller than 6? Yes it is.

 

Operator	Meaning	Example
&&	And - true if all operands are true	a && b
||	Or - true if any operand is true	a || b
!	Not - true if operand is false	!a
Let's see some examples,

5 is bigger than 3 and 1 equals 1

int b1 = (5 > 3) && (1 == 1); // holds true
1 is not equals 1 or false

int b2 = (1 != 1) || false; // holds false
not (3 bigger than 4)

int b3 = !(3 > 4); // holds true
not (5 bigger than 10 or 5 bigger than 1)

int b4 = !(5 > 10 || 5 > 1); // holds false
In the next chapter, we will look into some of the real uses of logical operators.

In the following tables, 0 stands for false, 1 for true

&& operator (stands for AND) in detail,

a	b	a && b
0	0	0
0	1	0
1	0	0
1	1	1
For example, if a is 0 (false) and b is also 0 (false) then a && b is also 0 (false)

|| operator (stands for OR) in detail,

a	b	a || b
0	0	0
0	1	1
1	0	1
1	1	1
! operator (stands for NOT) in detail,

a	!a
0	1
1	0

Quiz

3 Questions

Done


Challenge

Easy
You are given a program, insert the missing values for the variables b1 and b2 so b3 will hold 1.

 

To make it easier, insert only 0 or 1.


Solution

Solution
Revealed

#include <stdio.h>

int main() {
    int b1 = 1;
    int b2 = 1;
    int b3 = b1 && b2;
    
    // Don't change below this line
    printf("b3 = %d", b3);
    return 0;
};
*/

#include <stdio.h>

int main() {
    int b1 = 1;
    int b2 = 1;
    int b3 = b1 && b2;
    
    // Don't change below this line
    printf("b3 = %d\n", b3);
    return 0;
};