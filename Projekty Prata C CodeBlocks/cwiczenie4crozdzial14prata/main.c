#include <stdio.h>
#include <stdlib.h>
#define MAX 3

struct daneos
{
    char imie[30];
    char drugie_imie[30];
    char nazwisko[30];
};
struct struktura
{
    double pesel;
    struct daneos dane;
};
void wyswietl(struct struktura alkapone[],int n);
int main()
{
    struct struktura zmienna[MAX]=
    {
      {90072708737,{"Piotr","Joachim","Buchcic"}},
      {90404066537,{"Swinia","Knur","Birowski"}},
      {99357676737,{"Maciej","Wrona","Zygala"}}

    };
    wyswietl(zmienna,MAX);

    return 0;
}
void wyswietl(struct struktura alkapone[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {

    printf("%s %s %s %.0lf\n",alkapone[i].dane.imie,alkapone[i].dane.drugie_imie,alkapone[i].dane.nazwisko,alkapone[i].pesel);

    }
}
