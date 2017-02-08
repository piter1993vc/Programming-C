#include <stdio.h>
#include <stdlib.h>
/*przezroczystosc widocznosc*/
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
/*barwy mieszane*/
#define CZARNY 0
#define ZOLTY (CZER|ZIEL)
#define FIOLET (CZER|NIEB)
#define ZIELNIEB (ZIEL|NIEB)
#define BIALY (CZER|ZIEL|NIEB)

struct okna
{
    unsigned int przezrocz :1;
    unsigned int kolor_wyp  :3;
    unsigned int            :4;
    unsigned int widok_ramki :1;
    unsigned int kolor_ramki :3;
    unsigned int styl_ramki :2;
    unsigned int            :2;
};
const char*kolory[8]={"czarny","czerwony","zielony","zolty","niebieski","fioletowy","zielononiebieski","bialy"};

int main()
{
    struct okna okno={TAK,ZOLTY,TAK,ZIEL,KRESKI};
    printf("okno jest %s\n",okno.przezrocz==TAK?"przezroczyste":"nieprzezroczyste");
    printf("ramka jest narysowana linia:");
    switch(okno.styl_ramki)
    {
        case CIAGLA: printf("ciagla\n"); break;
        case KRESKI: printf("kreski\n"); break;
        case KROPKI: printf("kropki\n"); break;
        default :printf("nieznanego typu.\n");
    }
    printf("kolorem wypelnienia jest %s\n",kolory[okno.kolor_wyp]);
    printf("kolorem ramki jest %s\n",kolory[okno.kolor_ramki]);
    okno.przezrocz=NIE;
    okno.kolor_wyp=BIALY;
    okno.kolor_ramki=FIOLET;
    okno.styl_ramki=CIAGLA;
    printf("po dokonaniu zmian okno jest %s\n",okno.przezrocz==TAK?"przezroczyste":"nieprzezroczyste");
    printf("ramka jest narysowana linia ");
    switch(okno.styl_ramki)
    {
        case CIAGLA: printf("ciagla\n"); break;
        case KRESKI: printf("kreski\n"); break;
        case KROPKI: printf("kropki\n"); break;
        default :printf("nieznanego typu.\n");
    }
    printf("kolorem wypelnienia jest %s\n",kolory[okno.kolor_wyp]);
    printf("kolorem ramki jest %s\n",kolory[okno.kolor_ramki]);
    return 0;
}
