#include <stdio.h>
#include <stdlib.h>
#include "naglowek.h"
 int liczba_rzutow=0;
static int mixer(int scianki)
{
    int oczka;
    oczka=rand()%scianki+1;
    ++liczba_rzutow;
    printf("oczka=%d\n",oczka);
    return (unsigned int) oczka;
}
int rzucaj(int rzuty,int scianki)
{
    int k;
    int suma=0;
    if(scianki<2)
    {
        printf("wymagane conajmniej 2 scianki\n");
        return -2;
    }
    if(rzuty<1)
    {
        printf("wymagany conajmniej 1 rzut\n");
        return -1;
    }
    for(k=0;k<rzuty;k++)
    {
         suma+=mixer(scianki);
         /*printf("suma=%d\n",suma);*/
    }

    return suma;
}
