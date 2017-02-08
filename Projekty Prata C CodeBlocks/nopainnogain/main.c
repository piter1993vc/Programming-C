#include <stdio.h>
#include <stdlib.h>

int main()
{

    int pole,polozenie,szerokosc,wysokosc, wysokosc_2;
    int a,b,c,d;
    char znak, znak_2,wyswietlnik;
    printf("wpisz duza litere\n");
    scanf("%c",&znak);
    pole=(int)znak;
    printf("%d \n",pole);
    polozenie=pole-64;
    szerokosc=(polozenie*2)-1;
    wysokosc=pole-64;
    wysokosc_2=wysokosc;
    znak_2='A';


    for(a=0;a<wysokosc;a++)
    {

b=wysokosc_2-1;
for(b; b>=0; b--)
{
    printf(" ");

}


    for(wyswietlnik='A'; wyswietlnik<=znak_2+a;wyswietlnik++)
    printf("%c",wyswietlnik);


    for(wyswietlnik=wyswietlnik-1; wyswietlnik>'A';wyswietlnik--)
    printf("%c",wyswietlnik-1);






printf("\n");
wysokosc_2--;

    }


    return 0;
}
