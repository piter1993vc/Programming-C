#include <stdio.h>
#include <stdlib.h>
double potega(double a, int b);/*deklaracja funkcji czyli prototyp*/
int main()
{
    double x,xpot;
    int y;
    printf("podaj liczbe i jej potege\n");
while(scanf("%lf %ld",&x,&y)==2)
    {
        xpot=potega(x,y);
        printf("%lf do potegi %d wynosi %lf\n",x,y,xpot);
    }
    printf("milego dnia\n");
    return 0;
}
double potega(double a,int b)
{
    double pot=1;
    int licznik;
    for(licznik=1;licznik<=b;licznik++)
        pot*=a;
    return pot;
}

