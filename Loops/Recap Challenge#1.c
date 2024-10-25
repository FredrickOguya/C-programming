/*
Challenge
Write a program that gets input from the user, an integer, lets call it num. the program prints the sum of all the numbers from 1 to num*2;

Example.
Input:3
Output:21
Explanation : Sum of numbers from 1 to 6 (3*6) is 1+2+3+4+5+6=21
*/

#include <stdio.h>

int main(){
    int num,sum=0;
    scanf("%d",&num);
    int twice = num*2;
    
    for(int i=0;i<=twice;i++){
        sum+=i;
    }
    printf("%d\n",sum);

    return 0;
}