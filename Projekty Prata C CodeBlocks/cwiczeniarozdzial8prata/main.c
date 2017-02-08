#include <stdio.h>
#include <stdlib.h>

int main()
{
        int ch;
    putchar('\007');

    while((ch=getchar())!='\n')
    {
           putchar(ch++);
        putchar(++ch);
    }

    return 0;
}
