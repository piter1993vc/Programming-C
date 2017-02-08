#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 5
void pokaz(const double tab[],int n);
void pomnoz(double tab[],int n, double mnoznik);
int porownaj(const void*w1,const void*w2);
int main()
{
    double tablica[ROZMIAR]={2.4,2.2,3.12,41,32};
    printf("poczatkowa wartosc tablicy\n");
    pokaz(tablica,ROZMIAR);
    pomnoz(tablica,ROZMIAR,2.5);
    printf("tablica po przemnozeniu przez mnoznik\n");
    pokaz(tablica,ROZMIAR);
    qsort(tablica,ROZMIAR,sizeof(double),porownaj);
    printf("tablica po sortowaniu quick sort\n");
        pokaz(tablica,ROZMIAR);

    return 0;
}
void pokaz(const double tab[],int n)
{
    int index;
    for(index=0;index<n;index++)
        printf("%.2f ",*(tab+index));
    putchar('\n');
}
void pomnoz(double tab[],int n,double mnoznik)
{
    int index;
    for(index=0;index<n;index++)
*(tab+index)*=mnoznik;
putchar('\n');
}
int porownaj(const void *w1,const void*w2)
{
    const double *a1=w1;
    const double *a2=w2;
    if(*a1<*a2)
        return -1;
    else if(*a1==*a2)
        return 0;
    else return 1;
}
