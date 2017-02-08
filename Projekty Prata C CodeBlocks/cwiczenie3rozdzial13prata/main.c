#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 100
#define BUFOR 1024
char bufor[BUFOR];
int dopisz(FILE *zrodlo,FILE *cel);
int main()
{
    char zrodlo[MAX];
    char cel[MAX];
    int i=0;
    char ch;
    FILE *we,*wy;
    puts("podaj nazwe pliku docelowego:");
    gets(cel);
    if((wy=fopen(cel,"a"))==NULL)
    {
        fprintf(stderr,"nie udalo sie otworzyc pliku %s\n",cel);
        exit(1);
    }
    if((setvbuf(wy,NULL,_IOFBF,BUFOR))!=0)
    {
        fprintf(stderr,"nie udalo sie otworzyc bufora dla pliku %s\n",cel);
        exit(2);
    }
      zla_nazwa:
    puts("podaj nazwe pliku zrodlowego, lub pusty wiersz aby zakonczyc:");

    while(gets(zrodlo)&&zrodlo[0]!='\0')
    {
        if(strcmp(cel,zrodlo)==0)
        {
            fprintf(stderr,"nazwa pliku zrodlowego nie moze byc taka sama jak docelowego popraw sie:\n");
            goto zla_nazwa;
        }
        if((we=fopen(zrodlo,"r"))==NULL)
        {
            fprintf(stderr,"nie udalo sie otworzyc pliku %s\n",zrodlo);

            goto zla_nazwa;
        }
        if((setvbuf(we,NULL,_IOFBF,BUFOR))!=0)
    {
        fprintf(stderr,"nie udalo sie otworzyc bufora dla pliku %s\n",zrodlo);
        exit(4);
    }
    if(dopisz(we,wy))
    {
        i++;
        printf("plik %s dopisany\n",zrodlo);
    }
    else
    {
        printf("pliku %s nie dopisano\n",zrodlo);
    }
 fclose(we);
 puts("podaj kolejny plik do otwarcia:");
    }
    printf("dopisano %d plikow\n",i);
    fclose(wy);
if((wy=fopen(cel,"r"))==NULL)
{
    fprintf(stderr,"nie udalo sie otowrzyc pliku %s\n",cel);
    exit(4);
}
printf("zawartosc pliku %s to:\n",cel);
while((ch=getc(wy))!=EOF)
{
    putc(ch,stdout);
}
    puts("\n koniec!!!");
    getchar();
    getchar();
    return 0;
}
int dopisz(FILE *zrodlo,FILE *cel)
{
    int flaga=0;
    int i;
    extern char bufor[BUFOR];
    size_t bajty;
    while((bajty=fread(bufor,sizeof(char),BUFOR,zrodlo))>0)
    {
        for(i=0;i<bajty;i++)
        {
            if(isalpha(bufor[i]))
            {
                   bufor[i]=toupper(bufor[i]);
            }
        }
     fwrite(bufor,sizeof(char),bajty,cel);
flaga=1;
    }
   return flaga;
}
