#include <stdio.h>
#include <stdlib.h>
#define WIERSZE 2
#define KOLUMNY 2
void kopiuj(int zrodlo[][KOLUMNY], int cel[][KOLUMNY],int wiersze);
void pokaz(int tab[][KOLUMNY],int wiersze);
int main()
{
    int tablica1[WIERSZE][KOLUMNY]={{1,2},{4,7}};
    int tablica2[WIERSZE][KOLUMNY];
    kopiuj(tablica1,tablica2,WIERSZE);
    printf("tablica 2 wyglada nastepujaco:\n");
    pokaz(tablica2,WIERSZE);


    return 0;
}
void kopiuj(int zrodlo[][KOLUMNY], int cel[][KOLUMNY],int wiersze)
{
    int i,j;
    for(i=0;i<wiersze;i++)
    {
        for(j=0;j<KOLUMNY;j++)
            *(*(cel+i)+j)= *(*(zrodlo+i)+j);
}
}
void pokaz(int tab[][KOLUMNY],int wiersze)
{   int i,j;
    for(i=0;i<wiersze;i++)
    {
        for(j=0;j<KOLUMNY;j++)
        printf("%d ",*(*(tab+i)+j));
        printf("\n");
    }
}
