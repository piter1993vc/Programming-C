#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROZT 45
struct film
{
    char tytul[ROZT];
    int ocena;
    struct film *nast;
};
int main()
{
    struct film *glowny=NULL;
    struct film *filmy,*bierzacy;
    char temp[ROZT];
    puts("podaj 1 tytul filmu lub [enter] aby zakonczyc:");
    while(gets(temp)!=NULL&&temp[0]!='\0')
    {
        bierzacy=(struct film*)malloc(sizeof(struct film));
        if(glowny==NULL)
            glowny=bierzacy;
        else
            filmy->nast=bierzacy;
        bierzacy->nast=NULL;
        strcpy(bierzacy->tytul,temp);
        puts("podaj twoja ocene 0-10");
        scanf("%d",&bierzacy->ocena);
        while(getchar()!='\n')
            continue;
        puts("podaj nastepny tytul filmu, [enter] to koniec:");
        filmy=bierzacy;
    }
    if(glowny==NULL)
        printf("nic nie wpisano");
    else
        printf("oto lista filmow;\n");
    bierzacy=glowny;
    while(bierzacy!=NULL)
    {
        printf(" film : %s, ocena: %d\n",bierzacy->tytul,bierzacy->ocena);
        bierzacy=bierzacy->nast;
        free(filmy);
    }

    printf("do widzenia\n");
    return 0;
}
