#include <stdio.h>

int main(){
    int n,rev=0,num,digits;
    printf("Enter a number: ");
    scanf("%d",&num);

    n= num; /*stores the original number enterred by the user*/

    do{
        digits = num%10;
        rev = rev*10+digits;
        num/=10;
    }while(num!=0);
    if(n==rev)
    {
        printf("the number %d is a palindrome",n);
                printf("\n");
    }else{
        printf("The number %d is not palindrome\n",n);
        printf("\n");
    }
    
    return 0;
}