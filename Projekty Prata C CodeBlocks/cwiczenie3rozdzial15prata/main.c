#include <stdio.h>
#include <stdlib.h>
int licz(int n);
int main()
{
    int n;
    printf("podaj liczbe calkowita lub znak nienumeryczny aby zakonczyc:\n");
    while((scanf("%d",&n))==1)
    {
        printf("liczba %d ma wlaczonych %d bitow:\n",n,licz(n));
        printf("podaj kolejna liczbe calkowita lub znak nienumeryczny aby zakonczyc:\n");
    }
    return 0;
}
int licz(int n)
{
    int i;
    int suma=0;
    int licznik=8*sizeof(int);
    for(i=licznik-1; i>=0; i--,n>>=1)
    {
        if((01&n)==1)
        {
            suma+=1;
        }
    }
    return suma;
}
