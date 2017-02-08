#include <stdio.h>
#include <stdlib.h>
#define DL 20

struct daneos{
    char imie[DL];
    char nazwisko[DL];
};
struct facet{
struct daneos person;
char ulub_jedz[DL];
char zawod[DL];
float dochody;
};
int main()
{
    struct facet gosc[2]={{{"Chip","Hyperlink"},"omlet","assasin",24000},
    {{"pasi","brzuch"},"golonka","gnojarz",2}};
    struct facet *on;
        printf("adres: #1: %p,#2: %p\n",&gosc[0],&gosc[1]);
        on=&gosc[0];
        printf("wskaznik: #1: %p,#2: %p\n",on,on+1);
        printf("on->person.imie ma wartosc %s, (*on).zawod ma wartosc %s\n",on->person.imie,(*on).zawod);
        on++;
        printf("on->person.nazwisko ma wartosc %s, (*on).dochody ma wartosc %.2f\n",on->person.nazwisko,(*on).dochody);

    return 0;
}
