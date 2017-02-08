#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROZMIAR 1000
void sortuj(int *wsk,int n);
int main()
{
    int tablica[ROZMIAR];
    int *tymczas;
    int i;
    srand(1);
    for(i=0;i<1000;i++)
    {
        if(i%100==0&&i!=0)
        srand(i+1);
            tablica[i]=rand()%10+1;
    }
    for(i=0;i<ROZMIAR;i++)
    {
        printf("%d ",tablica[i]);
        if(i%100==0&&i!=0)
            putchar('\n');
    }
    tymczas=tablica;
    printf("\n\n\n");
    sortuj(tymczas,ROZMIAR);


    return 0;
}
void sortuj(int *wsk,int n)
{
    int temp;
    int i;
    int dol,gora;
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
         for(i=0;i<n;i++)
    {
        printf("%d ",wsk[i]);
        if(i%100==0&&i!=0)
            putchar('\n');
    }
}
