#include <stdio.h>

int main(){
    for(int i =0;i<=100;i+=3){
        if(i>22){
            break;
        }
        printf("%d\n",i);
    }
    return 0;
}