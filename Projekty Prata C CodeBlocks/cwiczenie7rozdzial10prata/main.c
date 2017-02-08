#include <stdio.h>
#include <stdlib.h>
#define WIELKOSC 7
void kopiuj(int zrodlo[],int cel[],int ile);
void pokaz(int tab[],int n);

int main()
{
    int oryginal[WIELKOSC]={1,2,3,4,5,6,72};
    int kopia[4];
    kopiuj(&oryginal[3],kopia,4);
    printf("kopia od 4 do 7 to\n");
    pokaz(kopia,4);
    return 0;
}
void kopiuj(int zrodlo[],int cel[],int ile)
{
    int i;
for(i=0;i<=ile;i++)
    cel[i]=zrodlo[i];
}
void pokaz(int tab[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",tab[i]);
}
