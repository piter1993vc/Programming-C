/*pomiar liczby bajtow i liczby slow danego lancucha*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h> /*biblioteka z funkcja strlen()*/
#define POCHWALA "Ale masz eleganckie imie" /*preprocesor*/

int main()
{
    char imie[40];

    printf("Prosze podaj swoje imie:\n");
    scanf("%s",imie);
    printf("%s oh %s\n",imie,POCHWALA);
    printf("%s Twoje imie ma %d znakow oraz zajmuje w pamieci %d bajtow\n",imie,strlen(imie),sizeof(imie));
    printf(" Z kolei dyrektywa POCHWALA ma %d znakow oraz zajmuje w pamieci %d bajtow\n",strlen(POCHWALA)
           ,sizeof(POCHWALA));

    return 0;
}
