#include <stdio.h>
#include <stdlib.h>
#include <float.h>


void srednia_zbior(int kolumny,int ktory,float tablica[kolumny]);
void srednia_all(int wiersze,int kolumny,float tablica[wiersze][kolumny]);
void maxmin(int wiersze,int kolumny,float tablica[wiersze][kolumny]);
int main()
{
    int i,j;
    int w=3;
    int k=5;
    float baza[w][k];
    printf("prosze podaj 3 wiersze po 5 elementow typu double:\n");
    for(i=0;i<w;i++)
    {
        for(j=0;j<k;j++)
        {
              scanf("%f",&baza[i][j]);
              printf("[%d][%d]=%f\n",i,j,baza[i][j]);
        }
    }
srednia_all(w,k,baza);
srednia_zbior(k,1,&baza[0][0]);
srednia_zbior(k,2,&baza[1][0]);
srednia_zbior(k,2,&baza[2][0]);
maxmin(w,k,baza);


    return 0;
}
void srednia_all(int wiersze,int kolumny,float tablica[wiersze][kolumny])
{
    int i,j;
    float suma,srednia;
    suma=0;
    srednia=0;
      for(i=0;i<wiersze;i++)
    {
        for(j=0;j<kolumny;j++)
        {
             suma+=tablica[i][j];
        }
    }
    srednia=suma/(wiersze*kolumny);
    printf("srednia ze wszystkich wartosci to %f\n",srednia);


}
void srednia_zbior(int kolumny,int ktory,float tablica[kolumny])
{
    int i;
    float suma=0;
    float srednia;

    for(i=0;i<kolumny;i++)
    suma+=tablica[i];
    printf("suma elementu %d to %f\n",ktory,suma);
    srednia=suma/kolumny;
    printf("srednia elementu %d to %f\n",ktory,srednia);

}
void maxmin(int wiersze,int kolumny,float tablica[wiersze][kolumny])
{
int i,j;
    int k,l;
    int m,n;
    float max=FLT_MIN;
    float min=FLT_MAX;

    for(i=0; i<wiersze; i++)
    {
        for(j=0; j<kolumny; j++)
        {
            if(tablica[i][j]>max)
            {
              max=tablica[i][j];
              k=i; l=j;
            }
            if(tablica[i][j]<min)
            {
             min=tablica[i][j];
             m=i; n=j;
            }
        }

    }
    printf("\nmaksymalna wartosc to: %f\n\n",max);
    printf("minimalna wartosc to: %f\n\n",min);
    printf("offset tablicy z maksymalna wartoscia to: [%d][%d]\n\n",k,l);
    printf("offset tablicy z minimalna wartoscia to:[%d][%d]\n\n",m,n);
    printf("roznica mieczy wartoscia max a min wynosi: %.2f\n\n",max-min);
}
