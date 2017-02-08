#include <stdio.h>
#include <stdlib.h>
#define MAXTYT 50
#define MAXAUT 50
#define MAXKS 10
struct ksiazka{
char tytul[MAXTYT];
char autor[MAXAUT];
float wartosc;
};

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
            printf("%s by %s: %.2f zl\n",bibl[licznik].tytul,bibl[licznik].autor,bibl[licznik].wartosc);


        licznik++;

    }
    licznikwp=licznik;
    if(licznik==MAXKS)
    {
        fputs("plik ksiazki.dat jest pelny",stderr);
        exit(2);

    }
    puts("podaj nowe tytuly ksiazek");
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
    puts("oto lista twoich ksiazek");
    for(index=0;index<licznik;index++)
    {
        printf("%s autor %s cena %.2f zl\n",bibl[index].tytul,bibl[index].autor,bibl[index].wartosc);
        fwrite(&bibl[licznikwp],rozmiar,licznik-licznikwp,wp);
    }
    fclose(wp);


    return 0;
}
