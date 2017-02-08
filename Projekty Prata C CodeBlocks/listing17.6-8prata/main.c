#include <stdio.h>
#include <stdlib.h>
#include "kolejka.h"
int main()
{
    Kolejka kol;
    Pozycja tymcz;
    char ch;
    IniciujKolejke(&kol);

    puts("Test interfejsu Kolejka. Wpisz d aby dodac wartosc");
    puts("u, aby usunac wartosc, lub q aby zakonczyc");
    while((ch=getchar())!='q')
    {
        if(ch!='d'&&ch!='u')
            continue; /*pomija inne dane wejsciowe*/
        if(ch=='d')
        {
            printf("liczba do dodania:\n");
            scanf("%d",&tymcz);
            if(!PelnaKolejka(&kol))
            {
                printf("Wstawiam %d do kolejki\n",tymcz);
                Ustaw(tymcz,&kol);
            }
            else
            {
                 puts("kolejka jest pelna!");

            }

        }
        else
        {
            if(PustaKolejka(&kol))
            {
                printf("nie ma czego usunac!");

            }
            else
            {
            Odlacz(&tymcz,&kol);
            printf("usuwam %d z kolejki\n",tymcz);
            }

        }
        printf("%d pozycji w kolejce\n",LiczbaPozycji(&kol));
        printf("podaj kolejny wybor:");
    }

    return 0;
}
