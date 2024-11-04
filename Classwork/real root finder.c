#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c,d,a1,a2;

    printf("Enter the three variables a,b and c:\n");
    scanf("%d %d %d",&a,&b,&c);

    d= sqrt(b*b-4*a*c);

    printf("%d",d);

return 0;

}