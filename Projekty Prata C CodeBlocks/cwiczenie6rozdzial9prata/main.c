#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char ch;

    while((ch=getchar())!=EOF)
    {
        if(isalpha(ch))
        {
            if(isupper(ch))
                 printf("numer litery %c w alfabecie to %d\n",ch,ch-64);
            if(islower(ch))
             printf("numer litery %c w alfabecie to %d\n",ch,ch-96);

        }


        else
            ch=EOF;
    }
    printf("Hello world!\n");
    return 0;
}
