#include <stdio.h>
#include <stdlib.h>

int main()
{
    int licznik;
    char tablica[11]; /* 1 element na znak null*/
printf("wpisz 10 znakow do tablicy\n");
for(licznik=0;licznik<=9;licznik++)
{
       scanf("%c",&tablica[licznik]);

}
printf("wpisane wartosci to:\n");
for(licznik=0;licznik<=9;licznik++)
printf("%c",tablica[licznik]);

/*dla int faktycznie tyle ile znakow tyle w tablicy ale dlaczego dla char i %c co 2 skacze??*/

    return 0;
}
