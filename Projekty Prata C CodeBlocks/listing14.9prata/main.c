#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 40
struct daneos{
char imie[MAX];
char nazwisko[MAX];
int litery;
};
struct daneos pobierz(void);
struct daneos oblicz(struct daneos info);
void pokaz(struct daneos info);

int main()
{
    struct daneos gowno;
    gowno=pobierz();
    gowno=oblicz(gowno);
    pokaz(gowno);
    printf("Hello world!\n");
    return 0;
}
struct daneos pobierz(void)
{
    struct daneos temp;
  puts("podaj swoje imie");
  gets(temp.imie);
  puts("podaj swoje nazwisko");
  gets(temp.nazwisko);
  return temp;
}
struct daneos oblicz(struct daneos info)
{
 info.litery=strlen(info.imie)+strlen(info.nazwisko);
 return info;
}
void pokaz(struct daneos info)
{
 printf("%sd %s.Twoje imie i nazwisko maja %d liter\n",info.imie,info.nazwisko,info.litery)   ;
}
