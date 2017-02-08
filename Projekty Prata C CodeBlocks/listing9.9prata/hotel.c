
#include <stdio.h>
#include <stdlib.h>
#include "hotel.h"

int pobierz_kod(void)
{
    int ch;
    printf("wybierz 1 z ponizszych opcji\n");
    printf("rabat za kazda kolejna noc to 0.95 nocy poprzedniej\n");
    printf("a) hotel esperanzo 124zl/noc                                  b)holel gowno 132zl/noc\n");
    printf("c) hotel stare rury 125zl/noc                                  d)holel mlode dziewki 133zl/noc\n");
    printf("q) koniec\n");
    ch=pobierz_pierwszy();
    while((ch>'d'||ch<'a')&&ch!='q')
    {
        printf("popraw sie synek nie mamy takiego hotelu\n");
        ch=pobierz_pierwszy();
    }
    return ch;
}
int pobierz_noce(void)
{
    char ch;
    int noce;
    printf("powiedz mi ile nocy chcesz spedzic w hotelu\n");
    while((scanf("%d",&noce))!=1)
    {
        while((ch=getchar())!='\n')
        putchar(ch);
        printf("nie jest liczba calkowita\n");
        printf("podales zla liczbe popraw sie synek\n");
    }
    return noce;
}
int pobierz_pierwszy(void)
{
    int ch;
    ch=getchar();
    while(getchar()!='\n')
        continue;
        return ch;
}
void pokaz_cene(double hotel,int noce)
{
    int n;
    double suma=0.0;
    double przelicznik=1.0;
    for(n=1;n<=noce;n++,przelicznik*=RABAT)
        suma+=hotel*przelicznik;
    printf("zaplacisz moj mily %.2f\n",suma);

}
