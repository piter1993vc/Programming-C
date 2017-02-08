#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5
#define LIN 20
struct dane
{
    char imie[LIN];
    char nazwisko[LIN];

};

void print(struct dane *wsk,int n);
int sort(const void*w1,const void*w2);
int main()
{

    struct dane chlop[MAX]=
    {
        {"Kaczka","Dziwaczka"},
        {"Krecik","Czarny"},
        {"Janusz","Was"},
        {"Bin","Ban"},
        {"U1","Bator"}
    };

  printf("\n before sort struct:\n");
    print(&chlop[0],MAX);
    qsort(&chlop[0],MAX,sizeof(struct dane),sort);
    printf("\n sorted struct:\n");
    print(&chlop[0],MAX);

    return 0;
}
void print(struct dane *wsk,int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%s %s \n",(wsk+i)->nazwisko,(wsk+i)->imie);
    }
}
int sort(const void*w1,const void*w2)
{
    const struct dane *a1=w1;
    const struct dane *a2=w2;
    int wyn;
    wyn=strcmp(a1->nazwisko,a2->nazwisko);
    if(wyn!=0)
    {
       return wyn;
    }

    else
    {
       return strcmp(a1->imie,a2->imie);
    }
}
