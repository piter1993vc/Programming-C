#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFOR 1024
#define DLAN 50
char temp[BUFOR];
void kopiuj(FILE *zrodlo,FILE *cel);
int main(int argc,char *argv[])
{
    int pliki=0;
    FILE *zr,*cel;
    int i;
  if(argc<3)
  {
      fprintf(stderr,"nie podano wystarczajacej liczby plikow");
      exit(1);
  }
    if((cel=fopen(argv[1],"a"))==NULL)
    {
        fprintf(stderr,"nie mozna bylo utworzyc pliku %s\n",argv[1]);
        exit(1);
    }
    if((setvbuf(cel,NULL,_IOFBF,BUFOR))!=0)
    {
        fprintf(stderr,"nie udalo sie utworzyc bufora dla pliku %s\n",argv[1]);
        exit(2);
    }
  for(i=2;i<argc;i++)
    {
        if(strcmp(argv[i],argv[1])==0)
        {
            fputs("nie mozna dopisac plikow do siebie (!te same nazwy!)\n",stdout);
            continue;
        }
         if ((zr=fopen(argv[i],"r"))==NULL)
        {
            fprintf(stderr,"nie udalo sie otworzyc pliku %s (!mozliwe ze nie istnieje!)\n",argv[i]);
            continue;
        }
       else
       {
           if((setvbuf(zr,NULL,_IOFBF,BUFOR))!=0)
           {
               fprintf(stderr,"nie udalo sie utwozyc bufora dla %s\n",argv[i]);
               continue;
           }
           kopiuj(zr,cel);
           if((ferror(zr))!=0)
           {
               fprintf(stderr,"blad odczytu pliku %s\n",argv[i]);
           }
           if((ferror(cel))!=0)
           {
               fprintf(stderr,"blad zapisu pliku %s\n",argv[1]);
           }
           fclose(zr);
           pliki++;
           printf("plik %s dopisany\n",argv[i]);
       }
    }
    printf("dopisano %d plikow\n",pliki);
    fclose(cel);
    getchar(); getchar();
    return 0;
}
void kopiuj(FILE *zrodlo,FILE *cel)
{
    extern char temp[BUFOR];
    size_t bajty;
    if((bajty=fread(temp,sizeof(char),BUFOR,zrodlo))>0)
        fwrite(temp,sizeof(char),bajty,cel);
}
