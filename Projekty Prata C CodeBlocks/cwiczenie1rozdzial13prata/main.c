#include <stdio.h>
#include <stdlib.h>
#define BUFOR 30
#define MAX 100
int main()
{
    FILE *we,*wy;

    int i;
    int j;
    int bufor[BUFOR];
    int wynik[BUFOR];
    int koniec[BUFOR];
    char cel[MAX];
    char zrodlo[MAX];
    char liczby[]="cyk.dat";
    char tab[MAX][BUFOR];


    int k;
    int l;


    if((we=fopen(liczby,"wb"))==NULL)
    {
         fprintf(stderr,"nie utworzono pliku  o nazwie %s\n",liczby);
        exit(1);
    }
        for(i=0;i<BUFOR;i++)
        {
             bufor[i]=i*2+4;
        }
        printf("bufor:\n");
        for(j=0;j<BUFOR;j++)
        {
             printf("bufor[%d]=%d\n",j,bufor[j]);
        }
          fwrite(bufor,sizeof(int),BUFOR,we);
          fclose(we);


    if((we=fopen(liczby,"rb"))==NULL)
    {
        fprintf(stderr,"nie znaleziono pliku zrodlowego o nazwie %s\n",liczby);
        exit(1);
    }
    k=fread(wynik,sizeof(int),BUFOR,we);
    printf("wynik\n");
        for(j=0;j<BUFOR;j++)
        {
             printf("wynik[%d]=%d\n",j,wynik[j]);
        }

        puts("podaj nazwe pliku binarnego docelowego:");
    gets(cel);
     if((wy=fopen(cel,"wb"))==NULL)
    {
        fprintf(stderr,"nie utworzono pliku docelowego o nazwie %s\n",cel);
        exit(2);
    }
  k=fwrite(wynik,sizeof(int),BUFOR,wy);


    fprintf(stdout,"zawartosc pliku %s :\n",cel);

fread(koniec,sizeof(int),k,wy);
for(j=0;j<k;j++)
    printf("%d\n",wynik[j]);



    puts("dzieki za wspolprace");
    fclose(we);
    fclose(wy);


    return 0;
}
