#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 10
#define PAR 72

int main()
{
int index,wynik[ROZMIAR];
float srednia;
int suma=0;
printf("wpisz 10 liczb calkowitych\n");
for(index=0;index<ROZMIAR;index++)
scanf("%d",&wynik[index]);
printf("wpisane przez ciebie liczby to\n");

for(index=0;index<ROZMIAR;index++)

    printf("%d\t",wynik[index]);
for(index=0;index<ROZMIAR;index++)
suma+=wynik[index];
srednia=(float)suma/ROZMIAR;
printf("\n srednia z %d liczb to %3.4f\n",index,srednia);
printf("handicap wynosi %f\n",srednia-(float)PAR);

    printf("Hello world!\n");
    return 0;
}
