#include <stdio.h>
#include <stdlib.h>

#include "lista.h"
/*funkcje lokalne*/
static void KopiujDoWezla(Pozycja pozycja,Wezel *wwezel);
/*funkcje interfejsu*/
/*inicializuje liste jako pusta*/
void IniciujListe(Lista *wlista)
{
   *wlista=NULL;
}
/*zwraca prawde, jesli lista jest pusta*/
bool PustaLista(const Lista *wlista)
{
    if(*wlista==NULL)
        return true;
    else
        return false;

}
/*zwraca prawde, jesli lista jest pelna*/
bool PelnaLista(const Lista *wlista)
{
    Wezel *wsk;
    bool full;
    wsk=(Wezel*)malloc(sizeof(Wezel));
    if(wsk==NULL)
        full=true;
    else
        full=false;
    free(wsk);
    return full;
}
/*zwraca liczbe wezlow*/
unsigned int LiczbaPozycji(const Lista*wlista)
{
    unsigned int licznik=0;
    Wezel *w=*wlista;
    while(w!=NULL)
    {
        ++licznik;
        w=w->nast; /*w wskazuje na nastepny wezel*/
    }
    return licznik;
}
/*tworzy wezel przechowujacy pozycje i dodaje go na koncu*/
/*listy wskazywanej przez *wlista(wolna implementacja ) */
bool DodajPozycje(Pozycja pozycja,Lista *wlista)
{
    Wezel *wnowy;
    Wezel *szuk=*wlista;
    wnowy=(Wezel*)malloc(sizeof(Wezel));
    if(wnowy==NULL)
        return false;
    KopiujDoWezla(pozycja,wnowy);
    wnowy->nast=NULL;
    if(szuk==NULL)
        *wlista=wnowy;
    else
    {

        while(szuk->nast!=NULL)
            szuk=szuk->nast;
            szuk->nast=wnowy;

    }
    return true;
}
/*"odwiedza" kazdy wezel i wykonuje funkcje wskazywana przez wfun*/
void Przejdz(const Lista *wlista,void(*wfun)(Pozycja pozycja))
{
    Wezel *wsk=*wlista;
    while(wsk!=NULL)
    {
        (*wfun)(wsk->pozycja);
        wsk=wsk->nast;
    }
}
/*zwalnia pamiec przydzielona przez malloc() i ustawia wskaznik na NULL */
void CzyscListe(Lista *wlista)
{
    Wezel *wsk;
    while(*wlista !=NULL)
    {
        wsk=(*wlista)->nast;
        free(*wlista);
        *wlista=wsk;
    }
}
/*definicja funkcji lokalnej*/
/*kopiuje element do wezla*/
static void KopiujDoWezla(Pozycja pozycja,Wezel *wwezel)
{
    wwezel->pozycja=pozycja;
}




