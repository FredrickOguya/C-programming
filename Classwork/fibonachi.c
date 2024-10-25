#include <stdio.h>

int main (){
    int first=0,second=1,next,n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("%d\n%d\n",first,second);
    do{
        
        next = first + second;
        first=second;
        second=next;
        n--;
        printf("%d\n",next);

    }while(n>0);
    return 0;
}