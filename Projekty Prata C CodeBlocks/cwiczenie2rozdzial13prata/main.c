#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    int i;
    FILE *wp;
    char ch;
    if(argc<2)
    {
        fprintf(stderr,"nie podano zadnego argumentu wiersza polecen\n");
        exit(1);
    }
    for(i=1;i<argc;i++)
    {
        if((wp=fopen(argv[i],"r"))==NULL)
        {
            fprintf(stderr,"nie udalo sie otworzyc pliku %s\n",argv[i]);
            continue;

        }
        printf("\n zawartosc pliku %d:\n",i-1);
        while((ch=getc(wp))!=EOF)
        {
            putc(ch,stdout);

        }
        fclose(wp);
    }

    printf("\n Do widzenia\n");
    getchar(); getchar();
    return 0;
}
