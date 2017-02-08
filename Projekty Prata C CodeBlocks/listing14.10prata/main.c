#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
struct daneos{
char *imie;
char *nazwisko;
int litery;
};
void pobierz(struct daneos*wsk);
void oblicz(struct daneos*wsk);
void pokaz(struct daneos *wsk);
void wyczysc(struct daneos *wsk);

int main()
{
    struct daneos swinia;
    pobierz(&swinia);
oblicz(&swinia);
 pokaz(&swinia);
 wyczysc(&swinia);

    printf("Hello world!\n");
    return 0;
}
void pobierz(struct daneos*wsk)
{
    char temp[MAX];
    puts("podaj swinio swoje imie");
    gets(temp);
    wsk->imie=(char*)malloc(strlen(temp)+1);
    strcpy(wsk->imie,temp);
    puts("podaj swinio swoje nazwisko");
    gets(temp);
    wsk->nazwisko=(char*)malloc(strlen(temp)+1);
    strcpy(wsk->nazwisko,temp);


}
void oblicz(struct daneos*wsk)
{
 wsk->litery=strlen(wsk->imie)+strlen(wsk->nazwisko);
}
void pokaz(struct daneos *wsk)
{
  printf("%s %s.Twoje imie i nazwisko maja %d liter\n",wsk->imie,wsk->nazwisko,wsk->litery);
}
void wyczysc(struct daneos *wsk)
{
  free(wsk->imie);
  free(wsk->nazwisko);
}
