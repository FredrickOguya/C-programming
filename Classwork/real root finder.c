#include <stdio.h>
#include <math.h>

int main(){
    int a,b,c,d,x,x1,x2;

    printf("Enter the coefficients a,b,and c: \n");
    scanf("%d%d%d",&a,&b,&c);

    d = b*b-4*a*c;

    if (d>0){
        x1=(-b+sqrt(d))/2*a;
        x2 = (-b-sqrt(d))/2*a;
        printf("x1 = %d\nx2=%d",x1,x2);
    }else if (d==0){
        x=-b/2*a;
        printf("x=%d",x);
    }else if(d<0){
        printf("No real roots");
    }
}