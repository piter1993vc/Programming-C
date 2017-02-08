#include <stdio.h>
#include <stdlib.h>
double potegowanie(double liczba,int potega);

int main()
{
    double liczba;
    int potega;

    printf("podaj liczbe\n");
    scanf("%le",&liczba);
    printf("podaj potege\n");
    scanf("%d",&potega);
    printf("wynik podniesienia liczby %le do potegi %d to %lf\n ",liczba,potega,potegowanie(liczba,potega));

    return 0;
}
double potegowanie(double liczba,int potega)
{
    double wynik;
    int licznik;

    if(liczba==0&&potega!=0)
        return 0.0;
        if(potega==0)
            return 1.0;
            if(potega<0&&liczba!=0)
            {
               if(potega<0)

               wynik= (1/liczba*potegowanie(liczba,potega+1));

                 else
                 wynik=1;

            return wynik;

            }
            if(potega>0)
            {
                 if(potega>0)
                    wynik=liczba*potegowanie(liczba,potega-1);
                else
                    wynik=1;
                       return wynik;
            }




}
