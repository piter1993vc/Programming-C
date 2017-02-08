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
                potega=abs(potega); /*zamiana potegi ujemnej na dodatnia*/
                wynik=(1/liczba);
                printf("wynik to %lf\n",wynik);
                for(licznik=2;licznik<=potega;licznik++)
                wynik*=(1/liczba);
                 printf("wynik to %lf\n",wynik);
            return wynik;

            }
            if(potega>0)
            wynik=liczba;
                for(licznik=2;licznik<=potega;licznik++)
                wynik*=liczba;
            return wynik;


}
