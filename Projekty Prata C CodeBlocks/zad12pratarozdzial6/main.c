#include <stdio.h>
#include <stdlib.h>
/*wyswietlanie wiersza lancucha w spak*/
int main()
{
    int iterator; /*zmienna pomocnicza do petli*/
    int dl_null; /*dlugosc lancucha znakowego z null*/
    int dl; /*--------||-------------bez null*/
    char wiersz[]="mam na to wyjebane";

        printf("\n wczytany lancuch to: %s\n",wiersz);/*wyswietlenie lancucha*/

    dl_null=strlen(wiersz);
    dl=dl_null-1;

        printf("z null=%d,bez null=%d\n",dl_null,dl);
         printf("lancuch wyswietlony w spak to: ");
    for(iterator=dl;iterator>=0;iterator--)
        printf("%c",wiersz[iterator]);


    return 0;
}
