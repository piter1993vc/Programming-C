#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    FILE *wp;
    int ch;
    if((wp=fopen("lama.txt","r"))==NULL)
    {
        fprintf(stdout,"nie udalo sie otworzyc pliku lama.txt\n");
        exit(1);
    }
        while((ch=getc(wp))!=EOF)
        {
            if(isdigit(ch))
            putchar(ch);
        }


    fclose(wp);

    return 0;
}
