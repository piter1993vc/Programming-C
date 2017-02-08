#include <stdio.h>
#include <stdlib.h>
void komunikat(void);
 extern void sumuj(int k);
int liczba=0;
int main(void)
{
    int wartosc;
    register int i;
    printf("podaj dodatnia liczbe cakowita(0 to koniec:");
    while(scanf("%d",&wartosc)==1&&wartosc>0)
    {
        liczba++;
        for(i=wartosc;i>=0;i--)
            sumuj(i);
        printf("podaj dodatnia liczbe calkowita (0 to koniec:\n");
    }
     komunikat();



    return 0;
}
    void komunikat(void)
    {
        printf("petle opuszczono po %d cyklach\n",liczba);
    }
