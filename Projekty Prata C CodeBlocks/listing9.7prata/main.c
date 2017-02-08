#include <stdio.h>
#include <stdlib.h>
long silnia(int n);
long rsilnia(int n);

int main()
{
    int numer;
    printf("Prosze podaj liczbe dla ktorej chceszz obliczyc silnie, max 15:\n");
    while((scanf("%d",&numer))==1)
    {
        if(numer<0)
               printf("tylko liczby dodatnie prosze\n");
        else if(numer>15)
               printf("maksymalna wartosc liczby to 15 popraw sie\n");
        else
        {
               printf("wynik oblicznie silni dla petli to: %d\n",silnia(numer));
               printf("wynik oblicznie silni dla rekurencji to: %d\n",rsilnia(numer));
        }
               printf("\n");
               printf("podaj kolejna liczbe do oblicznie\n");
    }

    return 0;
}
long silnia(int n)
{
    long wynik=1;
    long licznik;
    for(licznik=1;licznik<=n;licznik++)
        wynik*=licznik;
    return wynik;
}
long rsilnia(int n)
{
    long wynik;
    if(n>0)
        wynik=n*rsilnia(n-1);
    else
        wynik=1;
    return wynik;

}
