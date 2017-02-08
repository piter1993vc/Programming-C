#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#define WIERSZE 3
#define KOLUMNY 5
void srednia_zbior(double tab[],int ile,int ktory);
void srednia_all(double (*tab)[KOLUMNY],int wiersze);
void maxmin(double (*tab)[KOLUMNY],int wiersze);
int main()
{
    int i,j;
    double baza[WIERSZE][KOLUMNY];
    printf("prosze podaj 3 wiersze po 5 elementow typu double:\n");
    for(i=0;i<WIERSZE;i++)
    {
        for(j=0;j<KOLUMNY;j++)
        {
              scanf("%lf",&baza[i][j]);
              printf("[%d][%d]=%lf\n",i,j,baza[i][j]);
        }
    }
srednia_all(baza,WIERSZE);
srednia_zbior(&baza[0][0],KOLUMNY,1);
srednia_zbior(&baza[1][0],KOLUMNY,2);
srednia_zbior(&baza[2][0],KOLUMNY,3);
maxmin(baza,WIERSZE);


    return 0;
}
void srednia_all(double (*tab)[KOLUMNY],int wiersze)
{
    int i,j;
    double suma,srednia;
    suma=0;
    srednia=0;
      for(i=0;i<wiersze;i++)
    {
        for(j=0;j<KOLUMNY;j++)
        {
             suma+=tab[i][j];
        }
    }
    srednia=suma/(wiersze*KOLUMNY);
    printf("srednia ze wszystkich wartosci to %lf\n",srednia);


}
void srednia_zbior(double tab[],int ile,int ktory)
{
    int i;
    double suma=0;
    double srednia;

    for(i=0;i<ile;i++)
    suma+=tab[i];
    printf("suma elementu %d to %lf\n",ktory,suma);
    srednia=suma/ile;
    printf("srednia elementu %d to %lf\n",ktory,srednia);

}
void maxmin(double (*tab)[KOLUMNY],int wiersze)
{
    int i,j;
    double max;
    double min;
    max=-400000000;
    min=400000000;
    for(i=0;i<wiersze;i++)
    {
        for(j=0;j<KOLUMNY;j++)
            if(tab[i][j]>max) max=tab[i][j];
             if(tab[i][j]<min) min=tab[i][j];

    }
    printf("maksymalna wartosc ze zbioru 15 podanych liczb to %lf\n",max);
      printf("minimalna wartosc ze zbioru 15 podanych liczb to %lf\n",min);

}

