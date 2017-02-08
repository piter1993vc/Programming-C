#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFOR 256
int znajdz(char ch,const char *wiersz);
int main(int argc,char *argv[])
{
    FILE *wp;
    char ch;
    int i=1;
    char kaczka[BUFOR];
    char wiersz[BUFOR];
    if (argc!=3)

    {
        fprintf(stderr,"nie udalo sie znalesc argumentu wiersza polecen\n ");
wp=NULL;
    }

    if(argc==3)
    {
                    ch=argv[1][0];
                    if((wp=fopen(argv[2],"r"))==NULL)
                    {
                        fprintf(stdout,"nie udalo sie otwozyc pliku %s\n",argv[2]);

                    }

    }

    if(wp==NULL)
    {

        puts("podaj nazwe pliku w katalogu:");
        gets(kaczka);
        puts("podaj znak ktory ma sie zawierac w wierszu:");
        ch=getchar();
        if((wp=fopen(kaczka,"r"))==NULL)
        {
            fprintf(stdout,"nie znaleziono pliku %s\n",kaczka);
            exit(1);
        }
    }

    while(fgets(wiersz,BUFOR,wp)!=NULL)
    {
         if(znajdz(ch,wiersz))
         {
             printf("wiersz nr:%10d :",i);
            fputs(wiersz,stdout);
         }
        i++;
    }

    fclose(wp);
    getchar();
    getchar();
    return 0;
}



int znajdz(char ch,const char *wiersz)
{
    while(*wiersz)
    {
        if(strchr(wiersz,ch))
        {
             return 1;
        }
        else
            return 0;

    }

}
