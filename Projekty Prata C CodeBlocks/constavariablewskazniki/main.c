#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 4
void pokaz(const int*w1,int n);
void pomnoz(int *w2,int n,int mnoznik);
int main()
{
    const int tab1[ROZMIAR]={1,2,3,4};
    int tab2[ROZMIAR]={4,3,6,9};
    printf("tab1\n");
    pokaz(tab1,ROZMIAR);
    printf("tab 2\n");
    pokaz(tab2,ROZMIAR);
    pomnoz(tab2,ROZMIAR,4);
    printf("tab 2 po przenozeniu przez 4\n");
    pokaz(tab2,ROZMIAR);
    printf("Hello world!\n");
    return 0;
}
void pokaz(const int*w1,int n)
{
    int index;
    for(index=0;index<n;index++)
        printf("%d ",*(w1+index));
    putchar('\n');
}
void pomnoz(int*w2,int n,int mnoznik)
{
    int index;
    for(index=0;index<n;index++)
        *(w2+index)*=mnoznik;
    putchar('\n');
}
