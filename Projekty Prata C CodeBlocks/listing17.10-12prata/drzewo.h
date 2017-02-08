#ifndef _DRZEWO_H_
#define _DRZEWO_H_
#include <stdbool.h>
#define MAXPOZ 10

typedef struct pozycja
{
    char imie[20];
    char gatunek[20];

} Pozycja;

typedef struct wezel
{
    Pozycja pozycja;
    struct Wezel *lewy;
    struct Wezel *prawy;
} WEZEL;
typedef struct drzewo
{
    WEZEL *korzen;
    int rozmiar;
} DRZEWO;

void IniciujDrzewo(DRZEWO *wdrzewo);
bool PusteDrzewo(const DRZEWO *wdrzewo);
bool PelneDrzewo(const DRZEWO *wdrzewo);
int LiczbaPozycji(const DRZEWO *wdrzewo);
bool DodajPozycje(const Pozycja *wp,DRZEWO *wdrzewo);
bool WDrzewie(const Pozycja *wp,const DRZEWO *wdrzewo);
bool UsunPozycje(const Pozycja *wp,DRZEWO *wdrzewo);
void Przejdz(const DRZEWO *wdrzewo,void(*wfun)(Pozycja pozycja));
void UsunWszystko(DRZEWO *wdrzewo);

#endif // _DRZEWO_H_
