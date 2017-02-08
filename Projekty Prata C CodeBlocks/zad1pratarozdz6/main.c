#include <stdio.h>
#include <stdlib.h>



int main()
{

    char tablica[27];
      int indeks;
int liczba;
    printf("podaj 26 malych liter\n");

    for(indeks=0;indeks<26;indeks++)
    {
        printf("indeks=%d: ",indeks);
          scanf("%s",&tablica[indeks]);

    }


    printf("\n wpisane wartosci to\n");
    for(indeks=0,liczba=1;indeks<26;indeks++,liczba ++)
        printf("litera nr %-3d% to %3c\n",liczba,tablica[indeks]);
    return 0;
}
