#include <stdio.h>
#include <stdlib.h>
#define WIERSZE 4
#define KOLUMNY 3
int sumuj2d(int wiersze,int kolumny,int tab[wiersze][kolumny]);
int main()
{
    int i,j;
    int rw=3;
    int rk=10;
    int graty[WIERSZE][KOLUMNY]=
    {
        {1,2,3},
        {3,4,5},
        {4,3,2},
        {3,11,21}
        };
        int wiecej_gratow[WIERSZE-1][KOLUMNY+2]={{12,23,43,44,54}, {1,2,3,4,5}, {32,32,11,34,55}};
        int vla[rw][rk];
        for(i=0;i<rw;i++)
        {
            for(j=0;j<rk;j++)
                vla[i][j]=2*i+j;
        }
        printf("tablica 4x3 =%d\n",sumuj2d(WIERSZE,KOLUMNY,graty));
           printf("tablica 3x5 =%d\n",sumuj2d(WIERSZE-1,KOLUMNY+2,wiecej_gratow));
              printf("tablica vla =%d\n",sumuj2d(rw,rk,vla));






    printf("Hello world!\n");
    return 0;
}
int sumuj2d(int wiersze,int kolumny,int tab[wiersze][kolumny])
{
    int i,j;
    int suma=0;
    for(i=0;i<wiersze;i++)
    {
        for(j=0;j<kolumny;j++)
        suma+=*(*(tab+i)+j);
    }
     return suma;

}
