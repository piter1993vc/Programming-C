#include <stdio.h>
#include <stdlib.h>

int main()
{
    int zakres;
    int iterator;
    int licz1,licz2,licz3;
   printf("podaj zakres tabeli:\n");
   scanf("%d",&zakres);
   printf("\"liczba\" \"liczba do kwadratu\" \"liczba do szescianu\"\n");
    for(iterator=1;iterator<=zakres;iterator++)
    {
        licz1=iterator;
        licz2=licz1*licz1;
        licz3=licz2*licz1;
        printf("%4d %15d %15d\n",licz1,licz2,licz3);
    }
    return 0;
}
