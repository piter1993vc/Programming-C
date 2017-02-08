#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define WIERSZE 100
#define KOLUMNY 1000
#define NIE 0
#define TAK 1
int main()
{
    int i,j,k;
    int slowa,wielkie,male,znaki_przestankowe,cyfry;
    int flaga=NIE;
    char tablica[WIERSZE][KOLUMNY];
    i=0;
    puts("wpisuj co chcesz i jak chcesz ,wpisz pusty wiersz aby zakonczyc:");
    while(i<WIERSZE&&gets(tablica[i])!=NULL&&tablica[i][0]!='\0')
    {
        i++;
    }
    slowa=0;
    wielkie=0;
    male=0;
    znaki_przestankowe=0;
    cyfry=0;
    /*printf("i=%d\n",i);*/
    for(j=0; j<i; j++)
    {
        for(k=0; k<strlen(tablica[j]); k++)
        {
            if((tablica[j][k])!='\0')
            {
                printf("k=%d tablica(j,k)=%c \n",k,tablica[j][k]);
                if((tablica[j][k]!=' ')&&flaga==NIE)
                {
                    flaga=TAK;
                    slowa++;
                }
                if((tablica[j][k]==' ')&&flaga==TAK)
                {
                    flaga=NIE;
                }
                if(isupper(tablica[j][k]))
                {
                   /* printf("wielkie\n");*/
                    wielkie++;
                }
                if(islower(tablica[j][k]))
                {
                    male++;
                }
                if(ispunct(tablica[j][k]))
                {
                    znaki_przestankowe++;
                }
                if(isdigit(tablica[j][k]))
                {
                    cyfry++;
                }
            }
        }
    }
    printf("znaleziono %d slow\n",slowa);
    printf("znaleziono %d wielkich liter\n",wielkie);
    printf("znaleziono %d malych liter\n",male);
    printf("znaleziono %d znakow przestankowych\n",znaki_przestankowe);
    printf("znaleziono %d cyfr\n",cyfry);
    getchar(); getchar();
    return 0;
}
