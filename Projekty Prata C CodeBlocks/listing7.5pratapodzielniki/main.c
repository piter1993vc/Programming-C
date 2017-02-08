/*sprawdzenie czy liczba jest pierwsza jezeli nie to jakie ma podzielniki*/

#include <stdio.h>
#include <stdlib.h>
#define TAK 1 /*flaga stan wejsciowy*/
#define NIE 0 /*flaga przestawiona czyli liczba ma podzielniki*/

int main()
{
    int dzielnik; /*definicja zmiennej dzielnik*/
    int liczba; /*definicja zmiennej liczba*/
    int pierwsza=TAK; /*flaga pomocnicza carry in*/
    int stan; /*wyznacznik warunki <<---wylicza jaka wartosc zwraca funkcja scanf(); */
    printf("Prosze podaj liczbe calkowita do sprawdzenialub wpisz znak/litere aby zakonczyc: \n");
      stan=scanf("%d",&liczba);
      while(stan==1) /*warunek sprawdzajacy czy podano liczbe calkowita ze znakiem*/
      {
          for(dzielnik=2;dzielnik*dzielnik<=liczba;dzielnik++) /*petla szukajaca dzielnikow*/
                {
                    if(liczba%dzielnik==0) /*przynajmniej 1 rozny od 1 i 0 podzielnik*/
                        {

                        pierwsza=NIE;/*zmiana flagi carry in*/
                        if(dzielnik*dzielnik!=liczba) /*liczba nie ma powtarzalnych podzielnikow <<----np 144 to 12 razy 12*/
                        printf("liczba %d dzieli sie przez %d oraz %d\n",liczba,dzielnik,liczba/dzielnik);

                        if(dzielnik*dzielnik==liczba) /*liczba ma powtarzalne podzielniki wiec  trzeba 1 wyeliminowac*/
                        printf("liczba %d dzieli sie przez %d \n",liczba,dzielnik);
                        pierwsza=NIE;

                        }

                }
                if(pierwsza==TAK) /*flaga carry nie zmienila wartosci z domyslnej dla liczby pierwszej*/
                printf("podana liczba %d jest liczba pierwsza\n",liczba);

                printf("Podaj kolejna liczbe calkowita do sprawdzenia lub wpisz znak/litere to zakoncze\n");/*podanie kolejnej liczby*/
                stan=scanf("%d",&liczba);/*przypisanie kolejnej liczby do zmiennej*/
        }
      printf("Dzieki za wspolprace milego dnia\n"); /*zakonczenie programu*/

    return 0;
}
