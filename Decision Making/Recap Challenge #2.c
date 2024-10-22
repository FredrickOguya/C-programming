/*
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    // Don't change above this line

    // Write code here
    int x;
    if(num>5)
    {
        x=5;
    }
    else
    {
        x=0;
    }
    
    // Don't change below this line
    printf("x = %d", x);
    return 0;
};
*/
#include <stdio.h>

int main() {
    char op;
    int n1;
    int n2;
    scanf("%c\n%d\n%d", &op, &n1, &n2);
    // Don't change above this line
    
    // Write code here
    int res;

    if(op== '+')
    {
        res = n1+n2;
    }
    else if(op == '-')
    {
        res = n1 - n2;
    }
    else if (op == '*' )
    {
        res = n1* n2;
    }
    else{
        res = 0;
    }
    // Don't change below this line
    printf("%d", res);
    return 0;
};