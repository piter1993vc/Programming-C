#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "kolejka.h"
#define MIN_W_GODZ 60.0
bool nowyklient(double x);
Pozycja czasklienta(long kiedy);
int main()
{
    Kolejka kol;
    Pozycja tymcz;
    int godz;
    int nagodz;
    long cykl,gran_cyklu;
    long odeslani=0;
    long klienci=0;
    long obsluzeni=0;
    long suma_kol=0;
    int czas_czek=0;
    double min_na_kl;
    long kol_czek=0;
    IniciujKolejke(&kol);
    srand(time(0));
    puts("studium przypadku:Punkt porad Zygmunta Prywaciarza");
    puts("podaj liczbe godzin symulacji:");
    scanf("%d",&godz);
    gran_cyklu=MIN_W_GODZ*godz;
    puts("podaj srednia liczbe klijentow w ciagu godziny");
    scanf("%d",&nagodz);
    min_na_kl=MIN_W_GODZ/nagodz;
    for(cykl=0;cykl<gran_cyklu;cykl++)
    {
        if(nowyklient(min_na_kl))
        {
            if(PelnaKolejka(&kol))
            {
                odeslani++;
            }
            else
            {
                klienci++;
                tymcz=czasklienta(cykl);
                Ustaw(tymcz,&kol);

            }
        }
        if(czas_czek<=0&&!PustaKolejka(&kol))
        {
            Odlacz(&tymcz,&kol);
            czas_czek=tymcz.czaskons;
            kol_czek+=cykl-tymcz.przybycie;
            obsluzeni++;

        }
        if(czas_czek>0)
        czas_czek--;
        suma_kol+=LiczbaPozycji(&kol);
    }

    if(klienci>0)
    {
        printf("klienci przyjeci do kolejki %ld\n",klienci);
        printf("klienci obsluzeni %ld\n",obsluzeni);
        printf("klienci odeslani  %ld\n",odeslani);
        printf("srednia dlugosc kolejki  %.2f\n",(double)suma_kol/gran_cyklu);
        printf("sredni czas oczekiwania %.2f\n",(double)kol_czek/obsluzeni);



    }
    else
        puts("brak klijentow");
    return 0;
}
bool nowyklient(double x)
{
    if(rand()*x/RAND_MAX <1)
        return true;
    else
        return false;

}
Pozycja czasklienta(long kiedy)
{
    Pozycja klient;
    klient.czaskons=rand()%3+1;
    klient.przybycie=kiedy;
    return klient;
}
