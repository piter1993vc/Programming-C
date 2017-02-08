#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 7

int main()
{
    int tablica[ROZMIAR]={2,5};
    int i;
    printf("%2s %-5s\n","i","tablica[i]");
    for(i=0;i<ROZMIAR;i++)
        printf("%2d %-5d\n",i,tablica[i]);
    return 0;
}
