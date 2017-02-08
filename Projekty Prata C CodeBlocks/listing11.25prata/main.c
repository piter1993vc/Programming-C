#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROZMIAR 81
#define GRANICA 20
void sortuj(char *lancuch[],int num);
int main()
{
    char wiersze[GRANICA][ROZMIAR];
    char *wsk[GRANICA];
    int licznik=0;
    int n;
    printf("podaj %d wierszy posortuje je alfabetycznie max 80 znakow na wiersz,\n",GRANICA);
    printf("aby zakonczyc nacisnij enter:\n");
    while(licznik<GRANICA&&gets(wiersze[licznik])!=NULL&&wiersze[licznik][0]!='\0')
    {
        wsk[licznik]=wiersze[licznik];
        licznik++;
    }
    sortuj(wsk,licznik);
    puts("a oto posortowana tablica");
    for(n=0;n<licznik;n++)
    {
        puts(wsk[n]);
    }
getchar(); getchar();
    return 0;
}
void sortuj(char *lancuch[],int num)
{
    char *temp;
    int dol,gora;
    for(dol=0;dol<num-1;dol++)
    {
        for(gora=dol+1;gora<num;gora++)
        {
            if(strcmp(lancuch[dol],lancuch[gora])>0)
            {
                temp=lancuch[dol];
                lancuch[dol]=lancuch[gora];
                lancuch[gora]=temp;
            }
        }
    }
}
