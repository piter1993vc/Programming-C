#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SLOWO "cukier"
#define ROZMIAR 40
int main()
{
    char *zrodlo=SLOWO;
    char *kopia[ROZMIAR]="Podaj mnie do sadu.";
    char *wl;
    puts(zrodlo);
    puts(kopia);
    wl=strcpy(kopia+6,zrodlo);
    puts(kopia);
    puts(zrodlo);

    return 0;
}
