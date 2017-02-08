#include <stdio.h>
#include <stdlib.h>

int main()
{
    char liczba[30];
    char *koniec;
    long wartosc;
    puts("podaj liczbe(pusty wiersz aby zakonczyc):");
    while(gets(liczba)&&liczba[0]!='\0')
    {
        wartosc=strtol(liczba,&koniec,10);
        printf("wartosc %d poprzedza %s (%d)\n",wartosc,koniec,*koniec);
               wartosc=strtol(liczba,&koniec,16);
        printf("wartosc %d poprzedza %s (%d)\n",wartosc,koniec,*koniec);
        puts("podaj kolejna liczbe:");
    }
   puts("do widzenia");
    return 0;
}
