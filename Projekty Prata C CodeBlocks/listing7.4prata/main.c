/*ciekawe jaki rachunek zaplacisz ????,program interaktywny w define mozna zmieniac progi i stawki*/
#include <stdio.h>
#include <stdlib.h>
#define STAWKA_1 0.2401 /*oplata za 1kwh ponizej 240KWh*/
#define STAWKA_2 0.2881/*kazda kolejna 1kwh w zakresie 240-300KWh*/
#define STAWKA_3 0.3457/*kazda kolejna 1kwh w zakresie 300-540KWh*/
#define STAWKA_4 0.4052/*kazda kolejna 1kwh powyzej 540KWh*/
#define PROG_1 240 /*próg 1*/
#define PROG_2 300 /*próg 2*/
#define PROG_3 540 /*próg 3*/
#define PODSTAWA_1 STAWKA_1*PROG_1/*oplata za pelne 240KWh*/
#define PODSTAWA_2  PODSTAWA_1+STAWKA_2*(PROG_2-PROG_1) /*oplata za pelne 300KWh*/
#define PODSTAWA_3 PODSTAWA_2+STAWKA_3*(PROG_3-PROG_2) /*oplata za pelne 540KWh*/

int main()
{
    float KWh; /*definicja zmiennej liczby KWh*/
    float cena; /*definicja zmiennej ceny*/
    printf("Prosze podaj ile KWh energii zuzyles w ciagu ostatniego kwartalu: \n"); /*pytanie o energie*/
    scanf("%f",&KWh); /*wczytanie liczby KWh z klawiatury*/
    if(KWh<=PROG_1) /*gdy mniej niz 1 prog*/
        cena=KWh*STAWKA_1; /*oplata*/
    else if(KWh<=PROG_2) /*gdy KWh=prog 1- prog 2*/
        cena=PODSTAWA_1+STAWKA_2*(PROG_2-KWh); /*oplata*/
    else if(KWh<=PROG_3) /*gdy KWh=prog 2 - prog 3*/
        cena=PODSTAWA_2+STAWKA_3*(PROG_3-KWh); /*oplata*/
    else /*gdy KWh> prog 3*/
        cena=PODSTAWA_3+STAWKA_4*(KWh-PROG_3); /*oplata*/
    printf("Moj drogi musisz zaplacic zakladowi %.2f zl za %.2f KWh\n",cena,KWh); /*wynik programu*/
    return 0;
}
