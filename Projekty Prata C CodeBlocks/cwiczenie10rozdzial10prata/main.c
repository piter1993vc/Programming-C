#include <stdio.h>
#include <stdlib.h>
#define WIERSZE 3
#define KOLUMNY 5
void podwajaczka(double (*tab)[KOLUMNY],int wiersze,int ile);
void pokaz(double (*tab)[KOLUMNY],int wiersze);
int main()
{
    int x;
    double tabliczka[WIERSZE][KOLUMNY]={
        {13.2,22,-12,-14,21},
        {33,21,45,76,11},
        {32,-28,-34,-121,21}
        };

    pokaz(tabliczka,WIERSZE);
        printf("Witam cie dzis bedziemy podwajac powyzsza tabele, ile krokow podwajania zastosowac\?:\n");
        scanf("%d",&x);
    podwajaczka(tabliczka,WIERSZE,x);
    printf("\"Good night And Good luck\" Dying Light\n");
    return 0;
}
void podwajaczka(double (*tab)[KOLUMNY],int wiersze,int ile)
{
    int i,j,k;
    for(i=0;i<ile;i++)
    {
        for(j=0;j<wiersze;j++)
        {
            for(k=0;k<KOLUMNY;k++)
                tab[j][k]*=2;
        }
        printf("wynik kroku %d to: \n",i+1);
          pokaz(tab,wiersze);
    }

}
void pokaz(double (*tab)[KOLUMNY],int wiersze)
{
    int i,j;
    for(i=0;i<wiersze;i++)
        {
            for(j=0;j<KOLUMNY;j++)
                printf("%.2f ",tab[i][j]);
                puts("\n");
        }
}
