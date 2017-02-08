#include <stdio.h>
#include <stdlib.h>
#define MAXTYT 41
#define MAXAUT 41
struct ksiazka{
char tytul[MAXTYT];
char autor[MAXAUT];
float wartosc;
};
int main()
{
    struct ksiazka polecana;
    int wynik;
    printf("wprowadz wynik testu\n");
    scanf("%d",&wynik);
if(wynik>=84)
polecana=(struct ksiazka){"zbrodnia i kara","fiodor dostojewski",9.99};
else
polecana=(struct ksiazka){"kubus puchatek","A.A.Milene",5.99};
printf("Wlasciwa dla ciebie lektura to\n");
printf("%s autorstwa %s w cenie %.2f\n",polecana.tytul,polecana.autor,polecana.wartosc);
    return 0;
}
