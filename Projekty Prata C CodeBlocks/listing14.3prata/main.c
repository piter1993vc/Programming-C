#include <stdio.h>
#include <stdlib.h>
#define DL 20
const char *teksty[5]={"Dziekuje za udany wieczor","Nie przypuszczalam,ze",
"moze byc tak uniwersalnym facetem. Musimy umowic sie","na pyszny",
"i spedzic ze soba kilka milych chwil"};
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
    struct facet gosc={{"Chip","Hyperlink"},"omlet","assasin",24000};
    printf("%s - moj drogi\n",gosc.person.imie);
    printf("%s %s\n",teksty[1],gosc.person.imie);
    printf("%s %s\n",teksty[2],gosc.zawod);
    printf("%s %s %s",teksty[3],gosc.ulub_jedz,teksty[4]);
    if(gosc.dochody>150000)
        puts("!!!");
    else if(gosc.dochody>75000)
        puts("!!");
    else
        puts("!");
    printf("\n%40s %s"," ","do zobaczenia wkrotce");
    printf("%40s %s\n"," ","Szalala");
    return 0;
}
