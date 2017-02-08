#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

 #define PRAWDA 1
 #define FALSZ 0
 #define MAX_DL 70

 int zle_granice(int poczatek, int koniec, int granice);
 void wyswietl(char znak,int poczatek,int koniec);

int main()
{
    int ch;
    int start;
    int stop;

    printf("Podaj znak i 2 liczby calkowite\n");
    printf("wedlug zalecen: D 3 23\n");
    printf("aby zakonczyc wpisz EOF\n");
    while((ch=getchar())!=EOF)
    {
        if(isspace(ch))
            continue;
        if((scanf("%d %d",&start,&stop))!=2)
            break;
        if((zle_granice(start,stop,MAX_DL))==PRAWDA)
            printf("podano zle granice\n");
        else
            wyswietl(ch,start,stop);

        printf("podaj kolejny znak i 2 liczby calkowicte/zakoncz znakiem EOF\n");


    }
    printf("Hello world!\n");
    return 0;
}
int zle_granice(int poczatek,int koniec,int granice)
{
   if(poczatek>koniec||poczatek<1||koniec>granice)
        return PRAWDA;
   else
    return FALSZ;
}
void wyswietl(char znak,int poczatek,int koniec)
{
    int kolumny;

    for(kolumny=1;kolumny<poczatek;kolumny++)
        putchar(' ');
    for(kolumny=poczatek;kolumny<=koniec;kolumny++)
        putchar(znak);
    putchar('\n');


}
