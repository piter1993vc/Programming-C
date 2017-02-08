#include <stdio.h>
#include <stdlib.h>
#define TAK 1
#define NIE 0

int main()
{
    int flaga;
    int liczba;
    int dzielnik;
    int pierwsza;
    int wybor;
    printf("Wyswietla wszystkie liczby pierwsze mniejsze badz rowne wpisanej.\n");
    printf("A takze wszystkie podzielniki liczb mniejszych i rownej wpisanej\n");
    printf("Czy wyswietlac podzielniki liczb niepierwszych? jezeli tak wpisz 1 jezeli nie to 0!\n");
    scanf("%d",&wybor);
    printf("Wpisz liczbe cakowita lub litere aby zakonczyc:\n");
    while((scanf("%d",&liczba))==1)
    {
        for(pierwsza=0;pierwsza<=liczba;pierwsza++)
        {
            for(dzielnik=2,flaga=TAK;(dzielnik*dzielnik)<=pierwsza;dzielnik++)
            {
                if(pierwsza%dzielnik==0)
                {
                    if(wybor==1)
                    {
                     if(dzielnik*dzielnik!=pierwsza)
                        printf("%d dzieli sie przez %d i %d\n",pierwsza,dzielnik,pierwsza/dzielnik);
                        else
                        printf("%d dzieli sie przez %d\n",pierwsza,dzielnik);
                    }

                        flaga=NIE;
                 }


            }
             if(flaga==TAK)
            printf("Liczba pierwsza mniejsza badz rowna %d to %d\n",liczba,pierwsza);
        }
         printf("Czy wyswietlac podzielniki liczb niepierwszych? jezeli tak wpisz 1 jezeli nie to 0!\n");
         scanf("%d",&wybor);
         printf("Wpisz kolejna liczbe calkowita lub litere aby zakonczyc:\n");

    }
    printf("\"Good Night Good Luck\"\n");
    getchar(); getchar();
    return 0;

}
