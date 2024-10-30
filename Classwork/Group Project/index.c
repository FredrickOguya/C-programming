#include <stdio.h>
#include <string.h>


struct index
{
    /* data */
};

void admission (){
    printf("Enter patients name");
    scanf("%");
}
/*

void doctors(){
    printf("Enter number to check details:/n1. ");
}
*/
int main(){

 int id,password;
    printf("Enter employee id: ");
    scanf("%d",&id);
    printf("Enter Your password: ");
    scanf("%d",&password);

    if(id/100000==456){
        printf("doctor\n");
    }else if(id/100000==789){
        printf("nurse");
    }else{
        printf("Access denied");
    }
    return 0;
}