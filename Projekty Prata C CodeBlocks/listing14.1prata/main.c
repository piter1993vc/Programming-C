#include <stdio.h>
#include <stdlib.h>
#define MAXTYT 41
#define MAXAUT 41

struct ksiazka{
        char tytul[MAXTYT];
        char autor[MAXAUT];
        float wartosc;
              }; /*koniec szablonu struktury*/
int main()
{
    struct ksiazka bibl;
    printf("podaj tytul ksiazki:\n");
    gets(bibl.tytul);
    printf("podaj autora ksiazki:\n");
    gets(bibl.autor);
    printf("podaj wartosc w zl\n");
    scanf("%f",&bibl.wartosc);
    printf("%s: %s, %.2f zl\n",bibl.tytul,bibl.autor,bibl.wartosc);

    return 0;
}
