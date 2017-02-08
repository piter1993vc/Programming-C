#include <stdio.h>
#include <stdlib.h>

int main()
{
char imie1[11], imie2[11];
int licznik;
printf("podaj 2 imiona\n");
licznik=scanf("%5s %10s",imie1,imie2);
printf("odczytalem %d imiona: %s i %s\n",licznik,imie1,imie2);
    return 0;
}
