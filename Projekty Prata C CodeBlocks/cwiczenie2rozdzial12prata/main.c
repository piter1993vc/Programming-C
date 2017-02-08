#include <stdio.h>
#include <stdlib.h>
#include "funkcje.h"

int main()
{
    int tryb;
    printf("wybierz :0-system metryczny,1-system us:\n");
    scanf("%d",&tryb);
    while(tryb>=0)
    {
        wybierz_tryb(tryb);
        pobierz_dane();
        wyswietl_dane();
        printf("wybierz : 0-system metryczny,1-system US ");
        printf("-1 aby zakonczyc\n");
        scanf("%d",&tryb);
    }
    printf("koniec\n");
    return 0;
}
