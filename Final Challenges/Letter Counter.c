#include <stdio.h>
#include <string.h>
int main() {
    char c;
    int num;
    printf("Enter a character: ");
     
    while (c!='$'){
        scanf("%c", &c);
        num+=1;
    }
    printf("%d\n",num);
    return 0;
}
