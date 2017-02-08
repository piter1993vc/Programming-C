#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define RAD_NA_ST (180/3.141592654)
typedef struct biegun
{
    double dlugosc;
    double kat;
} BIEGUN;
typedef struct kartez
{
    double x;
    double y;
} KARTEZ;
BIEGUN kart_na_biegun(KARTEZ k);

int main()
{
    KARTEZ wejscie;
    BIEGUN wyjscie;
    puts("Podaj wspolrzednie x,y wpisanie q konczy program");
    while((scanf("%lf %lf",&wejscie.x,&wejscie.y))==2)
    {
        wyjscie=kart_na_biegun(wejscie);
        printf("dlugosc=%.2lf,kat=%.2lf st\n",wyjscie.dlugosc,wyjscie.kat);
    }
    return 0;
}
BIEGUN kart_na_biegun(KARTEZ k)
{
    BIEGUN temp;
    temp.dlugosc=sqrt(k.x*k.x+k.y*k.y);
    if(temp.dlugosc==0)
        temp.kat=0;
    else
    temp.kat=RAD_NA_ST*atan2(k.y,k.x);
    return temp;
}
