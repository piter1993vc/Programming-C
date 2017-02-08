#include <stdio.h>
#include <stdlib.h>

int main()
{
    char imie[40],nazwisko[40];

    printf("podaj swoje imie i nazwisko\n");
    scanf("%s %s",imie,nazwisko);
    printf("%15s %15s\n%15d %15d\n\n\n",imie,nazwisko,strlen(imie),strlen(nazwisko));
     printf("%-15s %-15s\n%-15d %-15d\n",imie,nazwisko,strlen(imie),strlen(nazwisko));
    return 0;
}
