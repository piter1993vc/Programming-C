#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 10
long sumuj(int *poczatek,int *koniec);
int main()
{
    long suma;
    int tablica[ROZMIAR]={2,3,4,5,1,2,5,6,9,12};
    suma=sumuj(tablica,tablica+ROZMIAR);
    printf("suma wyrazow tablicy to %ld\n",suma);
    printf("rozmiar tablicy tablica w bajtach to %d\n",sizeof(tablica));

    return 0;
}
long sumuj(int *poczatek,int *koniec)
{

    long suma;
    int index;
    for(suma=0;poczatek<koniec; )
        suma+=*(poczatek++);
        printf("rozmiar tablicy poczatek w bajtach to %d\n",sizeof(poczatek));
    return suma;
}
