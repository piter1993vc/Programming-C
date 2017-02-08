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
void wyswietl(struct struktura*alkapone,int n);
int main()
{
    struct struktura zmienna[MAX]=
    {
      {90072708737,{"Piotr","Joachim","Buchcic"}},
      {90404066537,{"Swinia","Knur","Birowski"}},
      {99357676737,{"Maciej","Wrona","Zygala"}}

    };
    wyswietl(&zmienna[0],MAX);

    return 0;
}
void wyswietl(struct struktura *alkapone,int n)
{
    size_t dlugosc;
    int i,j;
    puts(alkapone->dane.drugie_imie);
   for(j=0;j<n;j++)

    {
       if((alkapone->dane.drugie_imie[0])!='\0')
   {
       dlugosc=strlen(alkapone->dane.drugie_imie);
    for(i=dlugosc-3;i<dlugosc;i++)
    {
        putchar(alkapone->dane.drugie_imie[i]);
    }
    putchar('.');
    putchar('\n');
   }
   alkapone++;
    }

}
