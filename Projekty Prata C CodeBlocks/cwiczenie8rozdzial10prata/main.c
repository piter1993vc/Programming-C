#include <stdio.h>
#include <stdlib.h>
#define WIERSZE 3
#define KOLUMNY 5
void kopiuj(int wiersze,int kolumny,double oryginal[wiersze][kolumny],double kopia[wiersze][kolumny]);
void pokaz(int wiersze,int kolumny,double tablica[wiersze][kolumny]);
int main()
{
    int rw=3;
    int rk=5;
    int i,j;


      double oryginal[rw][rk];
      double kopia[WIERSZE][KOLUMNY];



    printf("prosze wypelnij tablice %d x %d wartosciami typu double\n",rw,rk);
      for(i=0; i<rw; i++)
    {
        for(j=0; j<rk; j++)
        {
           scanf("%lf",&oryginal[i][j]);
           printf("[%d][%d]=%.2f\n",i,j,oryginal[i][j]);
        }

    }

kopiuj(rw,rk,oryginal,kopia);
printf("tablica oryginalna:\n");
pokaz(rw,rk,oryginal);
printf("tablica skopiowana:\n");
pokaz(rw,rk,kopia);

    return 0;
}
void kopiuj(int wiersze,int kolumny,double oryginal[wiersze][kolumny],double kopia[wiersze][kolumny])
{
    int i,j;
    for(i=0;i<wiersze;i++)
    {
        for(j=0;j<kolumny;j++)
            *(*(kopia+i)+j)= *(*(oryginal+i)+j);
    }
}
void pokaz(int wiersze,int kolumny,double tablica[wiersze][kolumny])
{
    int i,j;
       for(i=0;i<wiersze;i++)
    {
        for(j=0;j<kolumny;j++)
         printf("%.2f ",tablica[i][j]);
         puts("\n");
    }

}
