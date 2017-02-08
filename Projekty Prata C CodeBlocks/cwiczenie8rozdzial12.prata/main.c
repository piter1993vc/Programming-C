#include <stdio.h>
#include <stdlib.h>
int *stworz_tablice(int elem,int wart);
void pokaz_tablice(const int tab[],int n);

int main()
{
    int *wt;
    int rozmiar;
    int wartosc;
    printf("podaj liczbe elementow:");
    scanf("%d",&rozmiar);
    while(rozmiar>0)
    {
        printf("podaj wartosc poczatkowa: ");
        scanf("%d",&wartosc);
        wt=stworz_tablice(rozmiar,wartosc);
        if(wt)
        {
            pokaz_tablice(wt,rozmiar);
            free(wt);
        }
        printf(" \n podaj liczbe elementow (<1-koniec): ");
        scanf("%d",&rozmiar);
    }
    printf("koniec\n");

    return 0;
}
int *stworz_tablice(int elem,int wart)
{
int *rew;
int i;
rew=(int*)malloc(elem*sizeof(int));
if(rew)
{
    for(i=0;i<elem;i++)
        rew[i]=wart;
}
 return rew;
}
void pokaz_tablice(const int tab[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
           printf("%d",tab[i]);
    if(i%8==0&&i!=0)
        putchar('\n');
}


}
