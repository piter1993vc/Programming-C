#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTYT 50
#define MAXAUT 50
#define MAXKS 10
struct ksiazka{
char tytul[MAXTYT];
char autor[MAXAUT];
float wartosc;
};
void zamien(struct ksiazka *wsk);
int main()
{
    struct ksiazka bibl[MAXKS];
    int licznik=0;
    int index,licznikwp;
    FILE *wp;
    int rozmiar=sizeof(struct ksiazka);
    if((wp=fopen("ksiazki.dat","a+b"))==NULL)
    {
        fputs("nie udalo sie otworzyc pliku ksiazki.dat",stderr);
        exit(1);
    }
    rewind(wp);
    while(licznik<MAXKS&&fread(&bibl[licznik],rozmiar,1,wp)==1)
    {
        if(licznik==0)
        {
            puts("biezaca zawartosc pliku ksiazki.dat:");
        }
            printf("tytul: %s autor: %s: wartosc: %.2f denarow.\n",bibl[licznik].tytul,bibl[licznik].autor,bibl[licznik].wartosc);
            zamien(&bibl[licznik]);


        licznik++;

    }
    licznikwp=licznik;
    if(licznik==MAXKS)
    {
        fputs("plik ksiazki.dat jest pelny",stderr);
        goto skok;

    }
    puts("podaj nowy tytul ksiazki");
    puts("aby zakoncyc wcisnij [enter] na poczatku wiersza.");
    while(licznik<MAXKS&&gets(bibl[licznik].tytul)!=NULL&&bibl[licznik].tytul[0]!='\0')
    {
        puts("teraz podaj nazwe autora");
        gets(bibl[licznik].autor);
        puts("podaj cene ksiazki");
        scanf("%f",&bibl[licznik++].wartosc);
        while(getchar()!='\n')
            continue;
        if(licznik<MAXKS)
        {
         puts("podaj nastepny tytul, lub [enter] aby zakonczyc");
        }

    }
    skok:
    puts("oto lista twoich ksiazek");
    for(index=0;index<licznik;index++)
    {
        printf("tytul: %s, autor %s, cena %.2f denarow.\n",bibl[index].tytul,bibl[index].autor,bibl[index].wartosc);
        fwrite(&bibl[licznikwp],rozmiar,licznik-licznikwp,wp);
    }
    fclose(wp);


    return 0;
}
void zamien(struct ksiazka *wsk)
{
    char flaga[20];
    puts("czy moze chcesz zamienic dany rekord?:\"tak\"=zamieniac,\"nie\"=przejdz dalej:");
    gets(flaga);
    if(strcmp(flaga,"tak")==0)
    {
          puts("podaj tytul ksiazki");
    gets(wsk->tytul);
    puts("podaj autora ksiazki");
    gets(wsk->autor);
    printf("podaj wartosc ksiazki w denarach:\n");
    scanf("%f",&wsk->wartosc);
    while(getchar()!='\n')
        continue;
    }
    else
        printf("nie to nie,kolejny rekord to,o ile istnieje:\n");

}




