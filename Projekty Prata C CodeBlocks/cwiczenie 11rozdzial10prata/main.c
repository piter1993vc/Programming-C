#include <stdio.h>
#include <stdlib.h>
#define LATA 5
#define MIESIACE 12
void suma_roczna(double tab[][MIESIACE],int wiersze);
void roczna_srednia(double tab[][MIESIACE],int wiersze);
void srednia_miesieczna(double tab[][MIESIACE],int wiersze);

int main()
{
    double deszcz[LATA][MIESIACE]={{1,2,3,4,5,6,7,8,9,0,1,2},{11,12,44,32,-12.5,11,12,12,12,54,23},{1,2,3,4,5,6,7,8,144,0,1,2},{11,12,44,32,-12.5,11,11.35,12,12,54,23},{1,2,3,4,5,6,7,8,9,0,1,2}};
suma_roczna(deszcz,LATA);
 roczna_srednia( deszcz,LATA);
srednia_miesieczna(deszcz,LATA);

    return 0;
}
void suma_roczna(double tab[][MIESIACE],int wiersze)
{

    int i,j;
    double suma;
    for(i=0;i<wiersze;i++)
    {

        for(j=0;j<MIESIACE;j++)
            suma+=tab[i][j];

    }
     printf("suma opadow to  %.2lf\n ",suma);
}
void roczna_srednia(double tab[][MIESIACE],int wiersze)
{
  int i,j;
    double suma;
    for(i=0;i<wiersze;i++)
    {
        suma=0;
        for(j=0;j<MIESIACE;j++)
            suma+=tab[i][j];
        printf("rok %d daje opad %.2lf\n",2000+i,suma);
    }
}
void srednia_miesieczna(double tab[][MIESIACE],int wiersze)
{
     int i,j;
    double suma;
    double srednia;
    for(j=0;j<MIESIACE;j++)
    {
      suma=0;
        for(i=0;i<wiersze;i++)
        {
             suma+=tab[i][j];
        }
          srednia=suma/wiersze;
            printf("srednia w miesiacu %d to %.2lf\n",j+1,srednia);

    }

}

