#ifndef _KOLEJKA_H_
#define _KOLEJKA_H_
#include <stdbool.h>
#define MAXKOLEJKA 10
typedef struct pozycja
{
    long przybycie;
    int czaskons;
} Pozycja;
typedef struct wezel
{
    Pozycja pozycja;
    struct wezel *nast;
} WEZEL;
typedef struct kolejka
{
    WEZEL *przod;
    WEZEL *tyl;
    int pozycje;
} Kolejka;
void IniciujKolejke(Kolejka *wk);
bool PustaKolejka(const Kolejka *wk);
bool PelnaKolejka(const Kolejka *wk);
int LiczbaPozycji(const Kolejka *wk);
bool Ustaw(Pozycja pozycja,Kolejka *wk);
bool Odlacz(Pozycja *wpozycja,Kolejka *wk);

#endif // _KOLEJKA_H_
