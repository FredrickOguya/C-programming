#include <stdio.h>

int main(){
    int num,first=0,second=1,next;
    printf("Enter the number of terms: \n");
    scanf("%d",&num);
    printf("0\n1\n");
    do{
        next=first+second;
        first = second;
        second = next;
        printf("%d\n",next);
    }while(next<num);

    return 0;
}