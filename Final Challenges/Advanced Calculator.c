#include <stdio.h>

int main(){
    char op = ' ';
    float num1;
    float num2;

    float answer;
    while(op !='e'){
        scanf(" %c %f %f",&op,&num1,&num2);
        if (op == 'e'){
            break;
        }else if (op == '+'){
            answer=num1+num2;
        }else if (op == '-'){
            answer = num1-num2;
        }else if(op=='/'){
            answer = num1/num2;
        }else if(op =='*'){
            answer= num1*num2;
        }
        printf("%f\n",answer);
    }
}