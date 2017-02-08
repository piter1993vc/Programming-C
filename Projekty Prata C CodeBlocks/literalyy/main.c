
#include <stdio.h>
#include <stdlib.h>
void pokaz_1d(int *tab,int ile);
void pokaz_2d(int tab[][3],int wiersze);
int main()
{
int *wsk1;
int (*wsk2)[3];
wsk1=(int [2]){2,3};
wsk2=(int [2][3]){
{1,2,4},
{5,6,7}
};
pokaz_1d(wsk1,2);
pokaz_2d(wsk2,2);

    return 0;
}
void pokaz_1d(int *tab,int ile)
{
int i;
for(i=0;i<ile;i++)
{
printf("%d ",*tab++);
}
putchar('\n');

}
void pokaz_2d(int tab[][3],int wiersze)
{
int i,j;
    for( i=0;i<wiersze;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d ",tab[i][j]);

        }
        putchar('\n');

    }

}
