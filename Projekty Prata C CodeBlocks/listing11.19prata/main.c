#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define GRANICA 100
#define ROZMIAR 81
#define STOP "koniec"

int main()
{
    char wejscie[GRANICA][ROZMIAR];
    int licznik=0;
    printf("wprowadz %d wierszy (wpisz koniec aby zakonczyc):\n",GRANICA);
    while(licznik<GRANICA&&gets(wejscie[licznik])!=NULL&&strcmp(wejscie[licznik],STOP)!=0&&wejscie[licznik][0]!='\0')
    {
        licznik++;
    }
    printf("wprowadzono %d lancuchow\n",licznik);
    return 0;
}
