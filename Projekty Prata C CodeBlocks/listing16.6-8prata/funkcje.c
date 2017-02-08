#include <stdio.h>
#include <stdlib.h>
#include "dane.h"

void wyswietl(const daneos *wsk)
{
    printf("%s ",wsk->imie);
    printf("%s ",wsk->nazwisko);


}
void wprowadz( daneos *wsk)
{
    int i;
    printf("podaj swoje imie:");
    fgets(wsk->imie,MAX,stdin);
    i=0;
    while(wsk->imie[i]!='\n'&&wsk->imie[i]!='\0')
    {
        i++;
    }
    if(wsk->imie[i]=='\n')
        wsk->imie[i]='\0';
    else
        while(getchar()!='\n')
        continue;
         printf("podaj swoje nazwisko:");
    fgets(wsk->nazwisko,MAX,stdin);
    i=0;
    while(wsk->nazwisko[i]!='\n'&&wsk->nazwisko[i]!='\0')
    {
        i++;
    }
    if(wsk->nazwisko[i]=='\n')
        wsk->nazwisko[i]='\0';
    else
        while(getchar()!='\n')
        continue;




}


