#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch;
    while((ch=getchar())!='x')
    {

        putchar(ch);
    }

    ungetc(ch,stdin);
    putchar(ch);


    return 0;
}
