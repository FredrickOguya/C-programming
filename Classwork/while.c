#include <stdio.h>

int main (){
    int i = 1;
    int n;
    printf("Enter the number of terms");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",i);
        i+=1;
    }
}