#include <stdio.h>

int main(){
    int digits,num, rev =0,n;
    printf("Enter the test number : ");
    scanf("%d",&num);
        n=num;
    do{
        digits = num%10;
        rev = rev*10+digits;
        num/=10;
    }
    while(num!=0);
    if(n==rev){
        printf("%d is a palindrome",n);
    }else{
        printf("%d is not a palindrome",n);
    }
    return 0;
}