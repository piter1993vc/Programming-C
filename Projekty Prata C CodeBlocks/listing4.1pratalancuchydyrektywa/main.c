/*wylicza objetosc czlowieka dlugosc imienia ilosc bitow slowa */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define GESTOSC 998.5


int main(void)
{
    char imie[40];
    float waga,objetosc;
    int bajty,dlugosc;
    printf("Podaj swoje imie:\n ");
    scanf("%s",imie);
    printf("%s, Podaj swoja wage:\n",imie);
    scanf("%f",&waga);
    objetosc=waga/GESTOSC;
    dlugosc=strlen(imie);
    bajty=sizeof imie;
    printf("\n %s objetosc twojego ciala to %4.4f metrow szesciennych.\n",imie,objetosc);
    printf("%s dlugosc twojego imienia wynosi %d znakow\n",imie,dlugosc);
    printf("ponadto twoje imie przechowywane jest w pamieci w %d bajtach",bajty);
    return 0;


}
