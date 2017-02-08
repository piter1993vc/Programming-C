#include <stdio.h>
#include <stdlib.h>

#include <string.h>

#define MAXOSOB 12
#define MAXCHAR 30
#define ENTER putchar('\n')
#define SPACE putchar(' ')
#define CZYSC while(getchar()!='\n')continue
struct jambojet
{
    int nr_ident;
    int znacznik;
    char imie[MAXCHAR];
    char nazwisko[MAXCHAR];


};
char pokaz_menu(void);
void pokaz_liczbe(const struct jambojet *liczba,int n);
/*
void pokaz_liste();
void pokaz_alfabet_rezerw();
void zarezerwuj();
usun_rezerwacje();*/
int main()
{
    char wybor,odczyt;
    int i;
    FILE *wp;
    struct jambojet miejsca[MAXOSOB];
    struct jambojet temp[MAXOSOB];


    for(i=0; i<MAXOSOB; i++)
    {
        miejsca[i].nr_ident=23+i;
        temp[i].znacznik=0;
        printf(" %d :nr id %d\n",i+1,miejsca[i].nr_ident);
    }

    /*otwarcie pliku*/
    if((wp=fopen("baza_danych.txt","a+"))==NULL)
    {
        fputs("nie udalo sie otworzyc pliku \"baza_danych.txt\"",stderr);
        exit(1);
    }


    /*odczyt danych z pliku do struktury*/
    rewind(wp);
    i=0;
        while(i<MAXOSOB&&(odczyt=getc(wp))!=EOF)
        {
            fscanf(wp,"%d",&temp[i].nr_ident);
            fscanf(wp,"%s",temp[i].imie);
            fscanf(wp,"%s",temp[i].nazwisko);
            temp[i].znacznik=1;
            printf("temp[%d]=%d\n",i,temp[i].znacznik);
            i++;
        }




    while((wybor=pokaz_menu())!='f')
    {
        switch(wybor)
        {
        case 'a':
            pokaz_liczbe(temp,MAXOSOB);
            break;
            /*case 'b': pokaz_liste(); break;
              case 'c': pokaz_alfabet_rezerw(); break;
              case 'd': zarezerwuj();break;
              case 'e': usun_rezerwacje(); break;
              */
        }
    }
    fclose(wp);
    puts("koniec");
    return 0;
}
char pokaz_menu(void)
{
    char zmienna;

    printf("Aby wybrac opcje, wpisz jej oznaczenie literowe:\n");
    printf("a) Pokaz liczbe pustych miejsc.\n");
    printf("b) Pokaz liste pustych miejsc.\n");
    printf("c) Pokaz alfabetyczna liste miejsc.\n");
    printf("d) Zarezerwuj miejsce dla klijenta.\n");
    printf("e) Usun rezerwacje miejsca.\n");
    printf("f) Koniec.\n");
    zmienna=getchar();
    while(strchr("abcdef",zmienna)==NULL)
    {
        CZYSC;
        puts("wpisz ponownie:");
        zmienna=getchar();
    }
    return zmienna;
}
void pokaz_liczbe(const struct jambojet *liczba,int n)
{
    int i;
    int licznik=0;
    for(i=0; i<n; i++)
    {
        if((liczba->znacznik)==0)
        {
            licznik++;
        }
        liczba++;
    }
    printf("wolnych miejsc jest %d\n",licznik);
}
