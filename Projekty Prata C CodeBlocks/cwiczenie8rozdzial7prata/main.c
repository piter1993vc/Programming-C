#include <stdio.h>
#include <stdlib.h>
#define STAWKA_1 1200 /* stawka podatkowa 1*/
#define STAWKA_2 1800 /*stawka podatkowa 2*/
#define PROC_1 0.15 /*procent wzgledny podatku do 1200 zl*/
#define PROC_2 0.2 /*procent wzgledny podatku za kazda kwote doplaty 1200-1800zl */
#define PROC_3 0.25 /*procent wzgledny podatku za kwote doplaty powyzej 1800zl*/
#define PODSTAWA_1 (STAWKA_1)*(PROC_1) /*podatek za 1200zl*/
#define PODSTAWA_2 PODSTAWA_1+(STAWKA_2-STAWKA_1)*PROC_2 /*podatek za 1800zl*/
#define NADGODZINY 40 /*prog nadgodzin*/
#define MNOZNIK 1.5 /*mnoznik do nadgodzin*/
 /*oplata za 1h w normalnych godzinach pracy*/
int main()
{
    int ZA_H;  /*oplata za 1h w normalnych godzinach pracy*/
    int godziny; /*pojemnik na ilosc godzin*/
    float brutto; /*wynagrodzenie brutto*/
    float netto; /*wynagrodzenie netto*/
    float podatek; /*podatek*/
    int wybor;

    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("Podaj liczbe odpowiadajaca zadanej stawce wynagrodzenia lub opcji:\n");
    printf("%12s %40s\n%12s %40s\n%-12s\n","1) 35zl/godz.","2) 37zl/godz.","3) 40zl/godz.","4) 45zl/godz.","5) Wyjscie.");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    while((scanf("%d",&wybor))==1)
    {

    switch(wybor)
    {
        case 1: ZA_H=35; break;
        case 2: ZA_H=37; break;
        case 3: ZA_H=40; break;
        case 4: ZA_H=45; break;
        case 5:goto skok; /*koniec programu*/
        default: goto menu; /*szansa na poprawienie sie*/

    }
printf("Wybrano wynagrodzenie %dzl/1h\n",ZA_H);

    printf("Napisz ile godzin przepracowales w tym tygodniu: \n"); /*prosba o ilosc godzin*/
    scanf("%d",&godziny); /*strumien wejsciowy*/
    if(godziny<=NADGODZINY) /*warunek 1*/
        brutto=godziny*ZA_H;
    else /*przekroczenie liczby normalnych godzin pracy*/
        brutto=NADGODZINY*ZA_H+(godziny-NADGODZINY)*ZA_H*MNOZNIK;
    if(brutto<=STAWKA_1) /*oblizenie podatku do 1200zl*/
        podatek=brutto*PROC_1;
    else if(brutto<=1800) /*oblicznie podatku do 1800zl*/
        podatek=PODSTAWA_1+(brutto-STAWKA_1)*PROC_2;
    else /*oblicznie podatku powyzej 1800zl*/
        podatek =PODSTAWA_2+(brutto-STAWKA_2)*PROC_3;
    netto=brutto-podatek; /*oblicznie wyplaty netto*/
    printf("Pracowales %d %s, Wynagrodzenie brutto=%.2fzl, Podatek=%.2fzl, Wynagrodzenie netto=%.2fzl\n",godziny,(godziny>1)?"godzin":"godzine",brutto,podatek,netto); /*koniec programu i wyswietlenie wynikow*/
    menu: if (wybor>5||wybor<0) /*komunikat ze zle wpisalismy wybor oraz etykieta skoku goto*/
    printf("Wpisales zly odpowiednik popraw sie!\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("Podaj liczbe odpowiadajaca zadanej stawce wynagrodzenia lub opcji:\n");
    printf("%12s %40s\n%12s %40s\n%-12s\n","1) 35zl/godz.","2) 37zl/godz.","3) 40zl/godz.","4) 45zl/godz.","5) Wyjscie.");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");

}
    skok: /*wybor==5*/
        printf("Dzieki za wspolprace \"Do Widzenia\"\n");
        getchar(); getchar();

    return 0;
}
