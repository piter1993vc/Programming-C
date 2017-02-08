#include <stdio.h>
#include <stdlib.h>

int main()
{
    int suma;
    int licznik;
    int dni;
    printf("podaj ile dni chcesz przeliczyc\n");
    scanf("%d",&dni);

    suma=0;
    licznik=0;
    while(licznik++<dni)
    {



        suma+=(licznik*licznik);
        printf("masz po %d dniach %d zl hajsu\n",licznik,suma);

    }
    printf("zarobiles %d zl hajsiwa\n",suma);


    return 0;
}
