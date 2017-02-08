#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 100
int main(int argc,char *argv[])
{
    char bufor[MAX];
    FILE *wp;
    int i=1;
    if(argc<3)
    {
        fprintf(stderr,"nie podano wymaganych argumentow cmd\n");
        exit(1);
    }
    if((wp=fopen(argv[2],"r"))==NULL)
    {
        fprintf(stderr,"nie udalo sie otworzyc pliku %s lub nie istnieje\n",argv[2]);
        exit(2);
    }
    while((fgets(bufor,MAX,wp))!=NULL)
    {
           if(strstr(bufor,argv[1])!=NULL)
            {
                printf("%d",i++);
                fputs(bufor,stdout);
            }


    }

getchar(); getchar();
    return 0;
}
