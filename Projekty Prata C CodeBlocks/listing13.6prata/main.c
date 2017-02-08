#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFOR 1024
#define DLAN 50
char temp[BUFOR];
void kopiuj(FILE *zrodlo,FILE *cel);
int main()
{
    char plik_zr[DLAN];
    char plik_cel[DLAN];
    int pliki=0;
    FILE *zr,*cel;
    puts("podaj nazwe pliku docelowego:");
    gets(plik_cel);
    if((cel=fopen(plik_cel,"a"))==NULL)
    {
        fprintf(stderr,"nie mozna bylo otworzyc pliku %s\n",plik_cel);
        exit(1);
    }
    if((setvbuf(cel,NULL,_IOFBF,BUFOR))!=0)
    {
        fprintf(stderr,"nie udalo sie utworzyc bufora dla pliku %s\n",plik_cel);
        exit(2);
    }
    puts("podaj nazwe pliku zrodlowego ,pusty wiersz konczy program:");
    while(gets(plik_zr)&&plik_zr[0]!='\0')
    {
        if(strcmp(plik_zr,plik_cel)==0)
        {
            fputs("nie mozna dopisac plikow do siebie (!te same nazwy!)\n",stdout);
            goto skok;
        }
         if ((zr=fopen(plik_zr,"r"))==NULL)
        {
            fprintf(stderr,"nie udalo sie otworzyc pliku %s (!mozliwe ze nie istnieje!)\n",plik_zr);
            goto skok;

        }
       else
       {
           if((setvbuf(zr,NULL,_IOFBF,BUFOR))!=0)
           {
               fprintf(stderr,"nie udalo sie utozyc bufora dla %s\n",plik_zr);
               continue;
           }
           kopiuj(zr,cel);
           if((ferror(zr))!=0)
           {
               fprintf(stderr,"blad odczytu pliku %s\n",plik_zr);
           }
           if((ferror(cel))!=0)
           {
               fprintf(stderr,"blad zapisu pliku %s\n",plik_cel);
           }
           fclose(zr);
           pliki++;
           printf("plik %s dopisany\n",plik_zr);
           skok:
           puts("podaj koleny pliku do zapisu(pusty wiersz konczy prace):");
       }
    }
    printf("dopisano %d plikow\n",pliki);
    fclose(cel);
    return 0;
}
void kopiuj(FILE *zrodlo,FILE *cel)
{
    extern char temp[BUFOR];
    size_t bajty;
    if((bajty=fread(temp,sizeof(char),BUFOR,zrodlo))>0)
        fwrite(temp,sizeof(char),bajty,cel);
}
