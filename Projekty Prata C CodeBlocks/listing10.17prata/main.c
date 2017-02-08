#include <stdio.h>
#include <stdlib.h>
#define WIERSZE 3
#define KOLUMNY 4
void sumuj_wiersze(int tab[][KOLUMNY], int wiersze);
void sumuj_kolumny(int [][KOLUMNY],int);
int sumuj2d(int (*tab)[KOLUMNY],int wiersze);

int main()
{
    int graty[WIERSZE][KOLUMNY]=
    {
        {1,2,3,4},
        {5,6,7,8},
        {3,4,5,6},

    };
    sumuj_wiersze(graty,WIERSZE);
    sumuj_kolumny(graty,WIERSZE);
    printf("suma wszystkich elementow tablicy wynosi %d\n",sumuj2d(graty,WIERSZE));


    return 0;
}
void sumuj_wiersze(int tab[][KOLUMNY],int wiersze)
{
    int w;
    int k;
    int suma;
    for(w=0;w<wiersze;w++)
    {
        suma=0;
        for(k=0;k<KOLUMNY;k++)
            suma+=tab[w][k];
        printf("wiersz %d suma=%d\n",w+1,suma);
    }

}
void sumuj_kolumny(int tab[][KOLUMNY],int wiersze)
{
    int w;
    int k;
    int suma;
    for(k=0;k<KOLUMNY;k++)
    {
        suma=0;
        for(w=0;w<wiersze;w++)
            suma+=tab[w][k];
        printf("kolumny %d suma=%d\n",k+1,suma);
    }

}
int sumuj2d(int (*tab)[KOLUMNY],int wiersze)
{
    int w;
    int k;
    int suma=0;
    for(w=0;w<wiersze;w++)
    {
        for(k=0;k<KOLUMNY;k++)
            suma+=tab[w][k];
    }
    return suma;
}
