#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "drzewo.h"

typedef struct para
{
    WEZEL *rodzic;
    WEZEL *dziecko;
} Para;

/*prototypy funkcji lokalnych*/
static WEZEL * UtworzWezel(const Pozycja *wp);
static bool NaLewo(const Pozycja *p1,const Pozycja *p2);
static bool NaPrawo(const Pozycja *p1,const Pozycja *p2);
static void DodajWezel(WEZEL *nowy,WEZEL *korzen);
static void PoKolei(const WEZEL *korzen,void(*wfun)(Pozycja pozycja));
static Para SzukajPozycji(const Pozycja *wp,const DRZEWO *wdrzewo);
static void UsunWezel(WEZEL **wsk);
static void UsunWszystkieWezly(WEZEL *wsk);

/*definicje funkcji*/


void IniciujDrzewo(DRZEWO *wdrzewo)
{
    wdrzewo->korzen=NULL;
    wdrzewo->rozmiar=0;


}
bool PusteDrzewo(const DRZEWO *wdrzewo)
{
    if(wdrzewo->korzen==NULL)
        return true;
    else
        return false;

}
bool PelneDrzewo(const DRZEWO *wdrzewo)
{
    if(wdrzewo->rozmiar==MAXPOZ)
        return true;
    else
        return false;

}
int LiczbaPozycji(const DRZEWO *wdrzewo)
{
    return wdrzewo->rozmiar;

}
bool DodajPozycje(const Pozycja *wp,DRZEWO *wdrzewo)
{
    WEZEL *nowy;
    if(PelneDrzewo(wdrzewo))
    {
        fprintf(stderr,"drzewo jest pelne\n");
        return false;
    }
    if(SzukajPozycji(wp,wdrzewo).dziecko!=NULL)
    {
        fprintf(stderr,"Proba dodania istniejacej pozycji\n");
        return false;

    }
    nowy=UtworzWezel(wp);
    if(nowy==NULL)
    {
        fprintf(stderr,"Nie mozna utworzyc wezla\n");
        return false;
    }
    wdrzewo->rozmiar++;
    if(wdrzewo->korzen==NULL)
        wdrzewo->korzen=nowy;
    else
        DodajWezel(nowy,wdrzewo->korzen);
    return true;


}


bool WDrzewie(const Pozycja *wp,const DRZEWO *wdrzewo)
{
    return (SzukajPozycji(wp,wdrzewo).dziecko==NULL)?false:true;

}



bool UsunPozycje(const Pozycja *wp,DRZEWO *wdrzewo)
{
    Para szuk;
    szuk=SzukajPozycji(wp,wdrzewo);
    if(szuk.dziecko==NULL)
        return false;
    if(szuk.rodzic==NULL)
        UsunWezel(&wdrzewo->korzen);
    else if((szuk.rodzic->lewy)==szuk.dziecko)
        UsunWezel(&szuk.rodzic->lewy);
    else
        UsunWezel(&szuk.rodzic->prawy);
        wdrzewo->rozmiar--;
        return true;
}
void Przejdz(const DRZEWO *wdrzewo,void(*wfun)(Pozycja pozycja))
{
    if(wdrzewo!=NULL)
        PoKolei(wdrzewo->korzen,wfun);

}
void UsunWszystko(DRZEWO *wdrzewo)
{
    if(wdrzewo!=NULL)
        UsunWszystkieWezly(wdrzewo->korzen);
    wdrzewo->korzen=NULL;
    wdrzewo->rozmiar=0;

}

























static WEZEL * UtworzWezel(const Pozycja *wp)
{
    WEZEL *nowy;
    nowy=(WEZEL*)malloc(sizeof(WEZEL));
    if(nowy!=NULL)
    {
        nowy->pozycja=*wp;
        nowy->lewy=NULL;
        nowy->prawy=NULL;

    }
    return nowy;



}
static bool NaLewo(const Pozycja *p1,const Pozycja *p2)
{
    int porown1;
    if((porown1=strcmp(p1->imie,p2->imie))<0)
        return true;
    else if(porown1==0&&strcmp(p1->gatunek,p2->gatunek)<0)
        return true;
    else
        return false;

}
static bool NaPrawo(const Pozycja *p1,const Pozycja *p2)
{
    int porown1;
    if((porown1=strcmp(p1->imie,p2->imie))>0)
        return true;
    else if(porown1==0&&strcmp(p1->gatunek,p2->gatunek)>0)
        return true;
    else
        return false;

}
static void DodajWezel(WEZEL *nowy,WEZEL *korzen)
{
    if(NaLewo(&nowy->pozycja,&korzen->pozycja))
    {
        if(korzen->lewy=NULL)
            korzen->lewy=nowy;
        else
            DodajWezel(nowy,korzen->lewy);
    }

    else if(NaPrawo(&nowy->pozycja,&korzen->pozycja))
    {
        if(korzen->prawy=NULL)
            korzen->prawy=nowy;
        else
            DodajWezel(nowy,korzen->prawy);
    }
    else
    {
        fprintf(stderr,"blad funkcji DodajWezel()\n");
        exit(1);
    }


}
static void PoKolei(const WEZEL *korzen,void(*wfun)(Pozycja pozycja))
{
    if(korzen!=NULL)
    {
        PoKolei(korzen->lewy,wfun);
        (*wfun)(korzen->pozycja);
        PoKolei(korzen->prawy,wfun);
    }

}
static Para SzukajPozycji(const Pozycja *wp,const DRZEWO *wdrzewo)
{
    Para szuk;
    szuk.rodzic=NULL;
    szuk.dziecko=wdrzewo->korzen;
    if(szuk.dziecko==NULL)
    {
        return szuk;

    }
    while(szuk.dziecko!=NULL)
    {
        if(NaLewo(wp,&(szuk.dziecko->pozycja)))
        {
            szuk.rodzic=szuk.dziecko;
            szuk.dziecko=szuk.dziecko->lewy;
        }
        else if(NaPrawo(wp,&(szuk.dziecko->pozycja)))
        {
            szuk.rodzic=szuk.dziecko;
            szuk.dziecko=szuk.dziecko->prawy;
        }
        else
            break;
    }
    return szuk;



}
static void UsunWezel(WEZEL **wsk)
{
    WEZEL *tymcz;
    if((*wsk)->lewy==NULL)
    {
        tymcz=*wsk;
        *wsk=(*wsk)->prawy;
        free(tymcz);

    }
      else if((*wsk)->prawy==NULL)
    {
        tymcz=*wsk;
        *wsk=(*wsk)->lewy;
        free(tymcz);

    }
    else
    {


    for(tymcz=(*wsk)->lewy;tymcz->prawy!=NULL;tymcz=tymcz->prawy)
    {
    continue;

    }
    tymcz->prawy=(*wsk)->prawy;
    tymcz=*wsk;
    *wsk=(*wsk)->lewy;
    free(tymcz);
    }
}




static void UsunWszystkieWezly(WEZEL *wsk)
{
    WEZEL *wprawy;
    if(wsk!=NULL)
    {
        wprawy=wsk->prawy;
        UsunWszystkieWezly(wsk->lewy);
        free(wsk);
        UsunWszystkieWezly(wprawy);
        free(wprawy);
    }

}
