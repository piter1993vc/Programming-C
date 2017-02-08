#include <stdio.h>
#include <stdlib.h>
/*stale dla pol bitowych*/
/*przezroczystosc,widocznosc*/
#define TAK 1
#define NIE 0
/*style linii*/
#define CIAGLA 0
#define KROPKI 1
#define KRESKI 2
/*barwy podstawowe*/
#define NIEB 4
#define ZIEL 2
#define CZER 1
/*barwy posrednie*/
#define CZARNY 0
#define ZOLTY (CZER|ZIEL)
#define FIOLETOWY (CZER|NIEB)
#define ZIELNIEB (ZIEL|NIEB)
#define BIALY (CZER|ZIEL|NIEB)
/*stale dla operatorow bitowych*/
#define PRZEZR 0x1
#define WYP_NIEB 0x8
#define WYP_ZIEL 0x4
#define WYP_CZER 0x2
#define WYP_MASKA 0xE
#define RAMKA 100
#define RAMKA_NIEB 0x800
#define RAMKA_ZIEL 0x400
#define RAMKA_CZER 0x200
#define RAMKA_MASKA 0xE00
#define R_KROPKI 0x1000
#define R_KRESKI 0x2000
#define STYL_MASKA 0x3000

struct okno
{
    unsigned int przezrocz  :1;
    unsigned int kolor_wyp  :2;
    unsigned int            :4;
    unsigned int wid_ramki  :1;
    unsigned int kolor_ramki:3;
    unsigned int styl_ramki :2;
    unsigned int            :2;
};
const char*kolory[8]= {"czarny","czerwony","zielony","zolty","niebieski","fioletowy","zielononiebieski","bialy"};
char *int_do_binar(int n,char *w1);
void wyswietl(const struct okno *wsk);
void wyswietl1(const unsigned short lan);





int main()
{


    union widoki
    {
        struct okno widok_st;
        unsigned short widok_sh;
    };
    union widoki okno= {{TAK,ZOLTY,TAK,ZIEL,KRESKI}};
    char bin_lan[8*sizeof(int)+1];
    printf("poczatkowe ustawienia okna:");

    wyswietl(&okno.widok_st);
    printf("ustawienia okna w postaci unsigned short:");
    wyswietl1(okno.widok_sh);
    printf("uklad bitow jest nastepujacy: %s\n",int_do_binar(okno.widok_sh,bin_lan));
    okno.widok_sh&=~WYP_MASKA; /*czysci bity wypelnienia*/
    okno.widok_sh|=(WYP_NIEB|WYP_ZIEL); /*ustawia wypelnienie*/
    okno.widok_sh^=PRZEZR; /*przelacza przezroczystosc*/
    okno.widok_sh|=RAMKA_CZER; /*zle podejscie*/
    okno.widok_sh&=~STYL_MASKA; /*czysci bity stylu*/
    okno.widok_sh|=R_KROPKI; /*ustawia styl ramki*/
    printf("po dokonianiu zmian:\n");
    wyswietl(&okno.widok_st);
    printf("ustawienia okna w postaci unsigned short: ");
    wyswietl1(okno.widok_sh);
    printf("uklad bitow jest nastepujacy : %s\n",int_do_binar(okno.widok_sh,bin_lan));


    return 0;
}

void wyswietl(const struct okno *wsk)
{
    printf("okno jest %s\n",(wsk->przezrocz)==TAK?"przezroczyste":"nieprzezroczyste");
    printf("ramka jest %s\n",(wsk->wid_ramki)==TAK?"widoczna":"niewidoczna");
    printf("ramka jest narysowana linia:");
    switch(wsk->styl_ramki)
    {
    case CIAGLA:
        printf("ciagla.\n");
        break;

    case KROPKI:
        printf("kropki.\n");
        break;

    case KRESKI:
        printf("kreski.\n");
        break;

    default    :
        printf("nieznanego typu.\n");
        break;


    }
    printf("kolorem wypelnienia jest %s\n",kolory[wsk->kolor_wyp]);
    printf("kolorem ramki jest %s\n",kolory[wsk->kolor_ramki]);
}
void wyswietl1(const unsigned short lan)
{
    printf("okno jest %s\n",(lan&PRZEZR)==PRZEZR?"przezroczyste":"nieprzezroczyste");
    printf("ramka jest %s\n",(lan&RAMKA)==RAMKA?"widoczna":"niewidoczna");
    printf("ramka jest narysowana linia:");
    switch(lan&STYL_MASKA)
    {
    case CIAGLA:
        printf("ciagla.\n");
        break;

    case KROPKI:
        printf("kropki.\n");
        break;

    case KRESKI:
        printf("kreski.\n");
        break;

    default    :
        printf("nieznanego typu.\n");
        break;


    }
    printf("kolorem wypelnienia jest %s\n",kolory[(lan>>1)&07]);
    printf("kolorem ramki jest %s\n",kolory[(lan>>9)&07]);
}


char *int_do_binar(int n,char *w1)
{
    int i;
    static int liczba=8*sizeof(int);
    for(i=liczba-1; i>=0; i--,n>>=1)
    {
        w1[i]=(01&n)+'0';
    }
    w1[liczba]='\0';
    return w1;
}














