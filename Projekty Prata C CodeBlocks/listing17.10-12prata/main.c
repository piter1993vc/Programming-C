#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "DRZEWO.h"
char menu(void);
void dodajzw(DRZEWO *wd);
void usunzw(DRZEWO *wd);
void pokazzw(const DRZEWO *wd);
void szukajzw(const DRZEWO *wd);
void wyswpoz(Pozycja pozycja);
void duzelit(char *lan);


int main()
{
    DRZEWO zwierz;
    char wybor;
    IniciujDrzewo(&zwierz);
    while((wybor=menu())!='q')
    {
        switch(wybor)
        {
            case 'd': dodajzw(&zwierz); break;
            case 'w': pokazzw(&zwierz); break;
            case 's': szukajzw(&zwierz); break;
            case 'l': printf("%d zwierzat w klubie.\n",LiczbaPozycji(&zwierz)); break;
            case 'u': usunzw(&zwierz); break;
            default : puts("blad w instrukcji switch");
        }
    }
    UsunWszystko(&zwierz);
    printf("Hello world!\n");
    return 0;
}
char menu(void)
{
    int ch;
    puts("klub zwierzat domowych baza danych");
    puts("podaj litere odpowiadajaca ponizszej pozycji:");
    puts("d)dodaj zwierze   w)wyswietl");
    puts("l)liczba zwierzat   )szukaj zwierze");
    puts("u)usun zwierza          q)koniec");
    while((ch=getchar())!=EOF)
    {
        while(getchar()!='\n')
            continue;
        ch=tolower(ch);
        if(strchr("dwlsuq",ch)==NULL)
        {
              puts("wpisz d,w,l,s,u lub q");
        }
        else break;


    }
    if(ch==EOF)
        ch='q';
    return ch;
}
void dodajzw(DRZEWO *wd)
{
    Pozycja tymcz;
    if(PelneDrzewo(wd))
        puts("brak wolnych miejsc");
    else
    {
        puts("podaj imie zwierzecia");
        gets(tymcz.imie);
         puts("podaj gatunek zwierzecia");
        gets(tymcz.gatunek);
        duzelit(tymcz.imie);
        duzelit(tymcz.gatunek);
        DodajPozycje(&tymcz,wd);

    }

}
void usunzw(DRZEWO *wd)
{
    Pozycja tymcz;
    if(PusteDrzewo(wd))
    {
        puts("brak pozycji");
        return;
    }
    puts("podaj imie zwierzecia ktore chcesz usunac");
    gets(tymcz.imie);
      puts("podaj gatunek zwierzecia");
    gets(tymcz.gatunek);
    duzelit(tymcz.imie);
    duzelit(tymcz.gatunek);
    printf("%s %s\n",tymcz.imie,tymcz.gatunek);
    if(UsunPozycje(&tymcz,wd))
        printf("zostal(a) usuniety/a z klubu\n");
    else
    printf("nie jest czlonkiem klubu\n");




}
void pokazzw(const DRZEWO *wd)
{
    if(PusteDrzewo(wd))
        puts("brak pozycji!");
    else
        Przejdz(wd,wyswpoz);

}
void szukajzw(const DRZEWO *wd)
{
       Pozycja tymcz;
    if(PusteDrzewo(wd))
    {
        puts("brak pozycji");
        return;
    }
    puts("podaj imie zwierzecia ktore chcesz znalesc");
    gets(tymcz.imie);
      puts("podaj gatunek zwierzecia");
    gets(tymcz.gatunek);
    duzelit(tymcz.imie);
    duzelit(tymcz.gatunek);
    printf("%s %s\n",tymcz.imie,tymcz.gatunek);
    if(WDrzewie(&tymcz,wd))
        printf("jest czlonkiem klubu\n");
    else
    printf("nie jest czlonkiem klubu\n");




}
void wyswpoz(Pozycja pozycja)
{
    printf("Zwierze %-19s Gatunek %-19s\n",pozycja.imie,pozycja.gatunek);
}
void duzelit(char *lan)
{
    while(*lan!='\0')
    {
           *lan=toupper(*lan);
    lan++;
    }

}












