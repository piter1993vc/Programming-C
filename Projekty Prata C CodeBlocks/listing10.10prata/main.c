#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 10
long sumuj(int tab[],int n);
int main()
{
    long suma;
    int tablica[ROZMIAR]={2,3,4,5,1,2,5,6,9,12};
    suma=sumuj(tablica,ROZMIAR);
    printf("suma wyrazow tablicy to %ld\n",suma);
    printf("rozmiar tablicy tablica w bajtach to %d\n",sizeof(tablica));

    return 0;
}
long sumuj(int tab[],int n)
{
    int index;
    int suma;
    for(index=0,suma=0;index<n;index++)
        suma+=*(tab+index);
        printf("rozmiar tablicy tab w bajtach to %d\n",sizeof(tab));
    return suma;
}
