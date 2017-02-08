#include <stdio.h>
#include <stdlib.h>

int main()
{
    char imie[40],nazwisko[40];
    printf("podaj imie i nazwisko\n");
    scanf("%s %s",imie,nazwisko);
    printf("witaj %s %s\n",nazwisko,imie);
    printf("\"%s\"\n",imie);
    printf("\"%20s\"\n",imie);
     printf("\"%-20s\"\n",imie);
     int dlugosc;
     dlugosc=3+strlen(imie);
     printf("!%*s!\n",dlugosc,imie);

    return 0;
}
