#include <stdio.h>
#include <stdlib.h>
struct daneos{
char imie[20];
char nazwisko[20];
};
struct bem{
int konczyny;
struct daneos tytul;
char typ[30];
};
void wyswietl(struct bem*wsk);
int main()
{
    struct bem *wb;
    struct bem deb={6,{"Berbnazel","Gwolkapwolk"},"Arkturianin"};
    wb=&deb;
    wyswietl(wb);

    return 0;
}
void wyswietl(struct bem*wsk)
{
  printf("%s %s jest %sem o %d konczynach\n",wsk->tytul.imie,wsk->tytul.nazwisko,
         wsk->typ,wsk->konczyny);
}
