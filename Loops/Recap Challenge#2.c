/*
Exponential is a mathematical operation, Written as b^n, involving two numbers, the base b and the exponent or power n



Challenge Medium

Write a program that gets two integers from the user - base and power (in this order), and calculates the exponential

Check the test cases for the format needed for the input
*/

#include <stdio.h>

int main(){
    int b,n,first=1;
    scanf("%d %d",&b,&n);
    for(int i =1;i<=n;i++){
        first*=b;
    }
    printf("The answers is %d\n",first);
    return 0;
}