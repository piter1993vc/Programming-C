#include <stdio.h>
#include <stdlib.h>
#include "kolejka.h"

static void KopiujDoWezla(Pozycja pozycja,WEZEL *ww);
static void KopiujDoPozycji(WEZEL *ww,Pozycja *wp);
void IniciujKolejke(Kolejka *wk)
{
    wk->przod=wk->tyl=NULL;
    wk->pozycje=0;

}
bool PustaKolejka(const Kolejka *wk)
{
    return wk->pozycje==0;
}
bool PelnaKolejka(const Kolejka *wk)
{
    return wk->pozycje==MAXKOLEJKA;
}
int LiczbaPozycji(const Kolejka *wk)
{
    return wk->pozycje;
}
bool Ustaw(Pozycja pozycja,Kolejka *wk)
{
    WEZEL *wnowy;
    if(PelnaKolejka(wk))
    {
        printf("kolejka jest pelna\n");
        return false;
    }
    wnowy=(WEZEL*)malloc(sizeof(WEZEL));
    if(wnowy==NULL)
    {
        fprintf(stderr,"Blad alokacji pamieci\n");
        exit(1);

    }
     KopiujDoWezla(pozycja,wnowy);
     wnowy->nast=NULL;

     if(PustaKolejka(wk))
        wk->przod=wnowy;
     else
        wk->tyl->nast=wnowy;
     wk->tyl=wnowy;
     wk->pozycje++;
     return true;

}
bool Odlacz(Pozycja *wpozycja,Kolejka *wk)
{
    WEZEL *wsk;
    if(PustaKolejka(wk))
    {

        return false;
    }
    KopiujDoPozycji(wk->przod,wpozycja);
    wsk=wk->przod;
    wk->przod=wk->przod->nast;
    free(wsk);
    wk->pozycje--;
    if(wk->pozycje==0)
    {
        wk->tyl=NULL;
    }
    return true;

}
static void KopiujDoWezla(Pozycja pozycja,WEZEL *ww)
{
    ww->pozycja=pozycja;

}
static void KopiujDoPozycji(WEZEL *ww,Pozycja *wp)
{
    *wp=ww->pozycja;
}




