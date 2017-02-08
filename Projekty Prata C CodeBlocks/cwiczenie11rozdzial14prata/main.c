#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define MAX 100
void zamien(double tab1[],double tab[2],int n,double(*wsk)(double x));
int main()
{
    int i;
    double tablica1[MAX];
    double tablica2[MAX];
    srand(time(NULL));
    for(i=0; i<MAX; i++)
    {
        tablica1[i]=(double)(rand()%10+1)*1.24;
    }
    printf("tablica wejsciowa:\n");
    for(i=0; i<MAX; i++)
    {
        printf("%.2f ",tablica1[i]);
        if((i%10==0)&&i!=0)
        {
            putchar('\n');
        }
    }
    zamien(tablica1,tablica2,MAX,log10);
    printf("\n tablica wejsciowa:\n");
    for(i=0; i<MAX; i++)
    {
        printf("%.2f ",tablica2[i]);
        if((i%10==0)&&i!=0)
        {
            putchar('\n');
        }
    }
    return 0;
}
void zamien(double tab1[],double tab2[],int n,double(*wsk)(double x))
{
    int i;
    for(i=0; i<n; i++)
    {
        tab2[i]=(*wsk)(tab1[i]);
    }
}
