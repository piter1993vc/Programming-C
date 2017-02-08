#include <stdio.h>
#include <stdlib.h>
#define MAXTYT 41
#define MAXAUT 41
#define MAXKS 100

struct ksiazka{
        char tytul[MAXTYT];
        char autor[MAXAUT];
        float wartosc;
              }; /*koniec szablonu struktury*/
int main()
{
    struct ksiazka bibl[MAXKS];
    int licznik=0;
    int i;
    printf("podaj tytul ksiazki lub pusty wiersz aby zakonczyc\n");
    while(licznik<MAXKS&&gets(bibl[licznik].tytul)!=NULL&&bibl[licznik].tytul[0]!='\0')
    {
     printf("podaj autora ksiazki:\n");
    gets(bibl[licznik].autor);
    printf("podaj wartosc w zl\n");
    scanf("%f",&bibl[licznik++].wartosc);
    while(getchar()!='\n')
    {
     continue;
    }

        if(licznik<MAXKS)
          printf("podaj kolejny tytul ksiazki lub pusty wiersz aby zakonczyc\n");

    }

    puts("oto lista ksiazek");
    for(i=0;i<licznik;i++)
    {
       printf("%s: %s, %.2f zl\n",bibl[i].tytul,bibl[i].autor,bibl[i].wartosc);
    }


puts("koniec");

    return 0;
}
