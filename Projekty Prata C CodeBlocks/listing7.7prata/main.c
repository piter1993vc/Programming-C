/*napisz esej ,program zliczy ci ilosc wierszy slow i znakow*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> /*biblioteka do analizy znakow typu char*/
#define TAK 1 /* flaga carry in na pozycji wlaczonej*/
#define NIE 0 /*flaga carry in na pozycji wylaczonej*/
#define KONIEC '|'

int main()
{
    char zdania; /*definicja zmiennej zdania <--pojemnik na dane*/
    long znaki=0L; /*definicja zmiennej zliczajacej slowa <--long na zapas bo moze ktos wpisze esej*/
    int slowa=0; /*definicja zmiennej zliczajacej slowa*/
    int wiersze=0; /*definicja zmiennej zliczajacej wiersze wpisanej frazy*/
    int flaga=NIE; /*domyslne ustawienie flagi carry in <--przestawiona w przypadku napotkania znaku drukowanego*/
    printf("prosze wpisz co tylko chcesz oprocz | !!!\n"); /*strumien wyjscia z komputera*/
    while((zdania=getchar())!=KONIEC ) /*warunek na dzialanie programu a jednoczenie strumien wejscia programu*/
    {
        znaki++; /*program wykrywajac ze znak nie jest rowny '|' inkrementuje liczbe slow*/

        if(zdania=='\n') /*warunek na inkrementacje liczby wierszy*/
            wiersze++;/*gdy program wykryje znak nowej linii to zinkrementuje liczbe wierszy*/
        if(!isspace(zdania)&&flaga==NIE) /*warunek logiczny zlozony na poczatek slowa czyli znak drukowany*/
            {
                slowa++; /*zwiekszenie liczby slow*/
                flaga=TAK; /*zmiana pozycji flagi carry in <--licznik jest w slowie*/
            }

        if(isspace(zdania)&&flaga==TAK) /*koniec slowa*/
                flaga=NIE;/*po zakonczeniu slowa trzeba wyzerowac flage carry in*/
    }
    printf("znaki=%ld slowa=%d wiersze=%d\n",znaki,slowa,wiersze);/*koniec programu*/

    return 0;
}
