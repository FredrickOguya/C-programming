#include <stdio.h>
#include <string.h>

int main()
{
    int ch = getchar();
    int cha = 0;
    while (ch!= '$')
    {
        if(ch!=' ' && ch != '\n'){
            cha++;
        }
        ch = getchar();
    }
    printf("%d",cha);
    return 0;
}