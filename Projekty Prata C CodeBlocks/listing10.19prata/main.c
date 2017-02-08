#include <stdio.h>
#include <stdlib.h>
#define KOLUMNY 4
int sumuj2d(int (*tab)[KOLUMNY],int n);
int sumuj(int *tab,int n);

int main()
{
    int suma1,suma2,suma3;
    int *wsk1;
    int (*wsk2)[KOLUMNY];
    wsk1=(int [4]) {1,2,3,4};
    wsk2=(int [2][KOLUMNY]) {{1,2,3,4}, {3,4,5,2}};
    suma1=sumuj(wsk1,4);
    suma2=sumuj2d(wsk2,2);
    suma3=sumuj2d((int [3][KOLUMNY]) {{1,2,3,4}, {1,2,4,5}, {1,3,4,5}},3);
    printf("suma1=%d\n",suma1);
     printf("suma2=%d\n",suma2);
      printf("suma3=%d\n",suma3);
    return 0;
}
int sumuj2d(int (*tab)[KOLUMNY],int n)
{
    int i,j;
    int suma=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<KOLUMNY;j++)
            suma+=*(*(tab+i)+j);
    }
    return suma;
}
int sumuj(int *tab,int n)
{
    int i;
    int suma=0;
    for(i=0;i<n;i++)

            suma+=*(tab+i);

    return suma;
}
