#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROZMIAR 100
void sortuj(int *wsk,int n);
int main()
{
    int i;
    int tablica[ROZMIAR];
    int *wsk;
    srand(time(NULL));
    for(i=0;i<ROZMIAR;i++)
        tablica[i]=rand()%10+1;

     for(i=0;i<ROZMIAR;i++)
        printf("%d ",tablica[i]);
        wsk=tablica;
        sortuj(wsk,ROZMIAR);
             for(i=0;i<ROZMIAR;i++)
        printf("%d ",wsk[i]);



    return 0;
}
void sortuj(int *wsk,int n)
{
    int temp;
    int dol;
    int gora;
    for(dol=0;dol<n-1;dol++)
    {
        for(gora=dol+1;gora<n;gora++)
        {
            if(wsk[dol]>wsk[gora])
            {
                temp=wsk[dol];
                wsk[dol]=wsk[gora];
                wsk[gora]=temp;
            }
        }
    }
}
