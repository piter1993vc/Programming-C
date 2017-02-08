#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 40
struct daneos{
char imie[MAX];
char nazwisko[MAX];
int litery;
};
void pobierz(struct daneos *wsk);
void oblicz(struct daneos *wsk);
void pokaz(const struct daneos *wsk);

int main()
{
    struct daneos dane;
    pobierz(&dane);
    oblicz(&dane);
    pokaz(&dane);

    return 0;
}
void pobierz(struct daneos *wsk)
{
   puts("podaj swoje imie");
   gets(wsk->imie);
     puts("podaj swoje nazwisko");
   gets(wsk->nazwisko);
}
void oblicz(struct daneos *wsk)
{
   wsk->litery=strlen(wsk->imie)+strlen(wsk->nazwisko);
}
void pokaz(const struct daneos *wsk)
{
   printf("%s %s. Twoje imie i nazwisko zawieraja %d liter\n",wsk->imie,wsk->nazwisko,(*wsk).litery) ;
}
