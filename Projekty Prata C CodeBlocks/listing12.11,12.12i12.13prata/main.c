#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "naglowek.h"


int main()
{
    int rzuty,wynik;
    int scianki;

    srand((unsigned int) time(0));
    printf("podaj liczbe scianek 0 oznacza koniec\n");
    while(scanf("%d",&scianki)==1&&scianki>0)
    {
        printf("ile rzutow\?\n");
        scanf("%d",&rzuty);
        printf("scianki=%d,rzuty=%d\n",scianki,rzuty);
        wynik=rzucaj(rzuty,scianki);
        printf("wyrzucono razem %d uzywajac %d %d sciennych kosci\n",wynik,rzuty,scianki);
        printf("podaj liczbe scianek lub 0 aby zakonczyc\n");
    }
    printf("funkcja rzucaj() zostala wywolana %d razy\n",liczba_rzutow);
    return 0;
}
