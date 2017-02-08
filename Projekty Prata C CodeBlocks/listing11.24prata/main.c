#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int main()
{
    char imie[MAX];
    char nazwisko[MAX];
    char formal[2*MAX+10];
    double wyplata;
    puts("podaj swoje imie:");
    gets(imie);
    puts("podaj swoje nazwisko:");
    gets(nazwisko);
    puts("podaj ile hajsu zarobiles w zl:");
    scanf("%lf",&wyplata);
  sprintf(formal,"%s %-19s: %6.2lf\n",imie,nazwisko,wyplata);
  puts(formal);
    return 0;
}
