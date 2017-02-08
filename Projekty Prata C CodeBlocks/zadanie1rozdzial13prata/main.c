#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *wp;
    int k;
    if((wp=fopen("zelatyna.txt","a"))==NULL)
    {
        fprintf(stdout,"nie udalo sie utwozyc pliku %s\n","zelatyna.txt");
        exit(1);
    }
    for(k=0;k<30;k++)
        fputs("nanette je zelatyne",wp);
    fclose(wp);
    printf("Hello world!\n");
    return 0;
}
