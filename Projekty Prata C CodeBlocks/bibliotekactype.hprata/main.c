#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> /*biblioteka do analizy znakow*/
/*patrz co wpisujesz*/
int main()
{
    char znak;
    printf("prosze wpisz znak: ");
    znak=getchar(); /*przypisanie znaku do zmiennej*/
    printf("wpisany znak to: %c\n",znak);
    if(isalpha(znak)) /*mala duza litera gdy wpiszemy litere*/
    {
        printf("zmiana na mala litere: %c\n",tolower(znak)); /*na  mała bez zmiany oryginalu*/
        printf("zmiana na duza litere: %c\n",toupper(znak));/*na  duza bez zmiany oryginalu*/
        /*zmiana oryginalu nastepuje gdy np. ch=toupper(ch) <--przypisanie;*/
    }
     if(isalnum(znak)) /*warunek na litere*/
    printf("znak to: liczba lub litera\n");

         if(isgraph(znak)) /*warunek na znak drukowany*/
    printf("znak to: znak drukowany\n");

             if(isprint(znak)) /*warunek na znak drukowany lub liuczne*/
    printf("znak to: znak drukowany lub odstep\n");

             if(ispunct(znak)) /*warunek na znak przestankowy*/
    printf("znak to: znak przestankowy \n");
           if(isspace(znak)) /*warunek na znak bialy*/
    printf("znak to: znak niedrukowany(whitespace)\n");


    return 0;

}
