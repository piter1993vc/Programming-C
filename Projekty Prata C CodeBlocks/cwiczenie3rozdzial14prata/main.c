#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTYT 41
#define MAXAUT 41
#define MAXKS 100

struct gra{
        char tytul[MAXTYT];
        char producent[MAXAUT];
        float wartosc;
              }; /*koniec szablonu struktury*/
int main()
{
    float suma=0;
    struct gra bibl[MAXKS];
    char *tablica[MAXKS];
    char *temp;
    int licznik=0;
    int i,j;
    int dol,gora;
    printf("podaj tytul gry lub pusty wiersz aby zakonczyc:\n");
    while(licznik<MAXKS&&gets(bibl[licznik].tytul)!=NULL&&bibl[licznik].tytul[0]!='\0')
    {
     printf("podaj producenta gry:\n");
    gets(bibl[licznik].producent);
    printf("podaj wartosc gry w zl:\n");
    scanf("%f",&bibl[licznik++].wartosc);
    while(getchar()!='\n')
    {
     continue;
    }

        if(licznik<MAXKS)
          printf("podaj kolejny tytul gry lub pusty wiersz aby zakonczyc\n");

    }

    puts("oto lista gier:");
    for(i=0;i<licznik;i++)
    {
       printf("%s: %s, %.2f zl\n",bibl[i].tytul,bibl[i].producent,bibl[i].wartosc);
    }
    puts("oto watrosc calkowita gier:\n");
      for(i=0;i<licznik;i++)
    {
       suma+=bibl[i].wartosc;
    }
    printf(" watrosc calkowita gier: to %.2f\n",suma);
for(i=0;i<licznik;i++)
    {
    tablica[i]=bibl[i].tytul;
    }


puts("sortowanie:");
for(dol=0;dol<licznik-1;dol++)
{
    for(gora=dol+1;gora<licznik;gora++)
    {
        if(strcmp(tablica[dol],tablica[gora])>0)
        {
            temp=tablica[dol];
            tablica[dol]=tablica[gora];
            tablica[gora]=temp;
        }
    }
}

for(i=0;i<licznik;i++)
{
    puts(tablica[i]);
}
puts("koniec");

    return 0;
}
