#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> /*biblioteka do analizy znakow*/
#define KONIEC '#' /*warunek -->deryrektywa preprocesora<-- zakonczenia programu*/
int main()
{
    char ch;/*pojemnik na dane kontrolne*/
    printf("Prosze podaj mala litere od a do f a ja podam ci zwierze, stwora na dana litere,\n"
             "lub wpisz znak \"#\" aby zakonczyc:\n"); /*prosba o dana wejsciowa*/
    while((ch=getchar())!=KONIEC) /*warunek interaktywnosci programu*/
    {
        if(ch=='\n') /*usuwanie kroku z znakiem nowej linii, zapobiega podwojnemu zadzialaniu petli dla 1 wyrazu*/
            continue; /*skok do poczatku petli*/
        if(islower(ch)) /*analizator znaku char<--sprawdza czy zostala wpisana mala litera*/
        {
              switch(ch) /*instrukcja switch*/
              {
               case 'a': printf("albatros, ptak z wielkim nosem.\n"); break; /*case dla a*/
               case 'b': printf("bobr,zwierze ktore rozgryza tamy na rzekach.\n"); break; /*case dla b*/
               case 'c': printf("cis,ptak ale co robi to nie wiem.\n"); break; /*case dla c*/
               case 'd': printf("daniel, odmiata jeleniowata.\n"); break; /*case dla d */
               case 'e': printf("ebola,wirus bardzo niebezpieczny.\n"); break; /*case dla e*/
               case 'f':  printf("foka, bardzo inteligentny ssak morski.\n"); break; /*case dla f*/
               default:  printf("wpisales litere z poza zakresu, wiekszy wybor juz w krotce.\n"); /*case dla malej litery spoza zakresu*/
              }
        }
        else printf("podales duza litere popraw sie prosze!\n"); /*gdy litera nie spelni warunku analizatora "islower"*/
                printf("podaj kolejna litere aby kontynuowac lub tez znak # aby zakonczyc:\n"); /*interaktywnosc*/

    }
    printf("Dzieki za wspolprace: \"Good night and good luck\" Dying Light -)\n"); /*zakonczenie programu<----!!!!*/
    getchar() ;getchar();
    return 0;
}
