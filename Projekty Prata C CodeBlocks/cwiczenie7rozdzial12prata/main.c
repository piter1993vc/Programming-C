#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rzucaj(int rzuty,int scianki);
static int mixer(int scianki);
 int liczba_rzutow=0;
int main()
{
    int rzuty,wynik;
    int scianki;
    int kolejki;
    int i;

    srand((unsigned int) time(0));
    printf("podaj liczbe kolejek q oznacza koniec\n");
    while(scanf("%d",&kolejki)==1)
    {
        printf("wprowadz liczbe scianek i rzutow:\n");

        scanf("%d %d",&scianki,&rzuty);
        /*printf("scianki=%d,rzuty=%d\n",scianki,rzuty);*/
        printf("oto %d kolejek rzutow %d %d scienncych kostkami:\n",kolejki,rzuty,scianki);
        for(i=0;i<kolejki;i++)
        {
        wynik=rzucaj(rzuty,scianki);
        printf("%d ",wynik);
        }

        printf("\n podaj liczbe kolejek  lub q aby zakonczyc:\n");
    }
    printf("funkcja rzucaj() zostala wywolana %d razy\n",liczba_rzutow);
    return 0;
}


static int mixer(int scianki)
{
    int oczka;
    oczka=rand()%scianki+1;
    ++liczba_rzutow;
   /* printf("oczka=%d\n",oczka);*/
    return (unsigned int) oczka;
}
int rzucaj(int rzuty,int scianki)
{
    int k;
    int suma=0;
    if(scianki<2)
    {
        printf("wymagane conajmniej 2 scianki\n");
        exit(EXIT_FAILURE);
    }
    if(rzuty<1)
    {
        printf("wymagany conajmniej 1 rzut\n");
        exit(EXIT_FAILURE);
    }
    for(k=0;k<rzuty;k++)
    {
         suma+=mixer(scianki);
         /*printf("suma=%d\n",suma);*/
    }

    return suma;
}
