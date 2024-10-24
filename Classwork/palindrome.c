#include <stdio.h>

int main(){
    int n,num, digits, rev=0;
    printf("Enter a number to reverse : ");
    scanf("%d",&num);
    n=num;
    do{
        digits = num%10;
        rev = rev*10+digits;
        num=num/10;
    }while(num>0);

    if(n==rev){
        printf("%d is a palindrome",n);
    }else{
        printf("%d is not a palindrome",n);
    }
    printf("\n");
    return 0;

}