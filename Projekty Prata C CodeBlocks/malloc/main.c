#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pokaz_float(double *tab,int ile)
{
int i;
for(i=0;i<ile;i++)
{
printf("%.2e ",*tab++);
}
}
void pokaz_2d(double tab[][10],int wiersze)
{
int i,j;
    for( i=0;i<wiersze;i++)
    {
        for(j=0;j<10;j++)
        {
            printf(" %e ",tab[i][j]);

        }
        putchar('\n');

    }

}

int main()
{
int i;
    double *wsk;
    double(*wsk2)[10];
    wsk=(double*)calloc(30,sizeof(double));
    wsk2=(double(*)[10])calloc(3*10,sizeof(double));

    if(wsk==NULL)
        exit(EXIT_FAILURE);
    for(i=0;i<30;i++)
    {

        wsk[i]=(double)i;
    }
    pokaz_float(wsk,30);
        putchar('\n');    putchar('\n');    putchar('\n');
     pokaz_2d(wsk2,3);
    free(wsk);
    free(wsk2);

    return 0;
}
