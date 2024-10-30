#include <stdio.h>
#include <string.h>

int main()
{
    char ch = getchar();
    int cha = 0;
    while (ch!= '$')
    {
        if(ch!=' ' && cha != '\n'){
            cha++;
        }
        ch = getchar();
    }
    printf("%d",cha);
    return 0;
}