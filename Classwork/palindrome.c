#include <stdio.h>

int main(){
    int inp,num,digits,rev=0;
    printf("Enter the number for checking\n");
    scanf("%d",&num);
    inp = num;
    do{   
        digits = num%10;
        rev=rev*10+digits;
        num/=10;
    }while(num>0);

    rev ==inp ? printf("the number is a palindrome\n"):printf("the number is not a palindrome\n");

    return 0;
    }
