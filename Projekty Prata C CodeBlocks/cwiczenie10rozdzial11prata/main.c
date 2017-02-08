#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funkcje.h"
#define WIERSZE 10
#define KOLUMNY 40

int main()
{
    char tablica[WIERSZE][KOLUMNY];
    int i;
    int j;
    char wybor;

        i=0;

    printf("podaj %d wierszy max %d znakow, lub wpisz pusty wiersz aby zakonczyc\n",WIERSZE,KOLUMNY-1);
    while(i<WIERSZE&&gets(tablica[i])!=NULL&&tablica[i][0]!='\0')
    {
        i++;
    }
    printf("Oto przyjete wiersze dla %d wierszy\n",i);
    for(j=0;j<=i;j++)
        puts(tablica[j]);

        while((wybor=menu())!=5)
        {



                printf("menu=%d\n",wybor);
                        switch(wybor)
            {
                case 1: wyswietl(tablica,i);break;
                case 2: sortuj_ascii(tablica,i); break;
                case 3: sortuj_dlugosc(tablica,i); break;
                case 4: sortuj_dl1wyraz(tablica,i); break;
                case 5: break;
                default: printf("zly wybor popraw sie\n");

            };
        }

printf("Good night and good luck\n");

              return 0;
}



