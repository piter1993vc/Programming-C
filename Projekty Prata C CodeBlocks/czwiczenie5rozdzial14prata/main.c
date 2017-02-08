#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 4
#define MAX 20

struct daneos
{
    char imie[20];
    char nazwisko[20];
};
struct student
{
    struct daneos dane;
    float oceny[MAX];
    float srednia;
};
void przypisz_oceny(struct student *wsk, int n);
void czysc(void);
int main()
{
    int i,j;
    float suma;
    struct student studenci[ROZMIAR]=
    {
        {.dane.imie="Piotr",.dane.nazwisko="Buchcic"},
        {.dane.imie="Rafal",.dane.nazwisko="Birowski"},
        {.dane.imie="Maciej",.dane.nazwisko="Zygala"},
        {.dane.imie="Krzysztof",.dane.nazwisko="Jura"}

    };
    for(i=0; i<ROZMIAR; i++)
    {
        printf("student %d: imie: %s, nazwisko: %s\n",i+1,studenci[i].dane.imie,studenci[i].dane.nazwisko);

    }

    przypisz_oceny(&studenci[0],ROZMIAR);
    printf("podane oceny to:\n");
    for(i=0; i<ROZMIAR; i++)
    {
        printf("%s %s: ",studenci[i].dane.imie,studenci[i].dane.nazwisko);
        for(j=0; studenci[i].oceny[j]!='\0'&&j<MAX; j++)
        {
            printf("%.1f ",studenci[i].oceny[j]);
        }
        putchar('\n');
    }

    for(i=0; i<ROZMIAR; i++)
    {
        suma=0;
        for(j=0; studenci[i].oceny[j]!='\0'&&j<MAX; j++)
        {
            suma+=studenci[i].oceny[j];
        }
        studenci[i].srednia=suma/(j+1);

    }
    printf("srednie ocen wynosza:\n");
    for(i=0; i<ROZMIAR; i++)
    {
        printf("%s %s srednia ocen: %.2f\n",studenci[i].dane.imie,studenci[i].dane.nazwisko,studenci[i].srednia);
    }

    return 0;
}
void przypisz_oceny(struct student *wsk,int n)
{
    int i,j;


    for(i=0; i<ROZMIAR; i++)
    {
        j=0;
        printf("podaj oceny %sa: \n",wsk->dane.imie);
        while(scanf("%f",&wsk->oceny[j])==1&&j<MAX)
        {
            if(wsk->oceny[j]>5||wsk->oceny[j]<2)
            {
                czysc();
                printf("podano ocene z poza zakresu 2-5, popraw sie:\n");
            }
            else
            {
                j++;
                czysc();
                printf("podaj kolejna ocene lub wpisz litere aby przejsc do kolejnego studenta\n");
            }

        }
        wsk++;
        czysc();

    }

};
void czysc(void)
{
    while(getchar()!='\n')
        continue;
}
