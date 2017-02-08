#include <stdio.h>
#include <stdlib.h>

#include "lista.h"
void pokazfilm(Pozycja pozycja);
int main()
{
    Lista filmy;
    Pozycja tymcz;
    IniciujListe(&filmy);
    if(PelnaLista(&filmy))
    {
        fprintf(stderr,"Brak pamieci! Do widzenia.\n");
        exit(1);
    }
    puts("podaj pierwszy tytul filmu:");
    while(gets(tymcz.tytul)!=NULL&&tymcz.tytul[0]!='\0')
    {
        puts("podaj ocene od 0 do 10");
        scanf("%d",&tymcz.ocena);
        while(getchar()!='\n')
            continue;
        if(DodajPozycje(tymcz,&filmy)==false)
        {
            fprintf(stderr,"blad alokacji pamieci\n");
            break;
        }
        if(PelnaLista(&filmy))
        {
            puts("lista jest juz pelna");
            break;
        }
        puts("podaj nastepny tytul filmu [enter] to koniec.");
    }
    if(PustaLista(&filmy))
    {
        printf("nie wpisano zadnych danych.");
    }
    else
    {
        printf("oto lista filmow :\n");
        Przejdz(&filmy,pokazfilm);
    }
    printf("wpisales %d filmow\n",LiczbaPozycji(&filmy));
    printf("do widzenia!\n");
    CzyscListe(&filmy);
    return 0;
}
void pokazfilm(Pozycja pozycja)
{
    printf("Film: %s, Ocena : %d\n",pozycja.tytul,pozycja.ocena);

}








