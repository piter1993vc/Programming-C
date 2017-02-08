#include <stdio.h>
#include <stdlib.h>
#define MIN_W_H 60

int main()
{
    int minuty,godziny,reszta;
    int warunek;

    skok:
    printf("Podaj liczbe minut jezeli chcesz zakonczyc to wpisz 0\n");
    scanf("%d",&minuty);
while(minuty!=0)
    {
        godziny=minuty/MIN_W_H;
        reszta=minuty%MIN_W_H;
        printf("%d minut to %d godzin i %d minut\n",minuty,godziny,reszta);
        goto skok;
    }
    printf("koniec\n");


    return 0;
}
