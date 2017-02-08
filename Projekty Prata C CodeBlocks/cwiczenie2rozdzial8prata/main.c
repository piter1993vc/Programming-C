#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char ch;
    int licznik=0;
    while((ch=getchar())!='|')
    {
if(ch=='\n')
    printf("\n");
    if(!isspace(ch))
    {

            printf(" % c %d",ch,ch);

       licznik++;
        if (licznik%10==0)
            printf("\n");
    }

    }
    printf("Hello world!\n");
    return 0;
}
