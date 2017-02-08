#include <stdio.h>
#include <stdlib.h>
#define WIERSZE 3
#define KOLUMNY 4
int main()
{
    int deszcz[WIERSZE][KOLUMNY]={{1,2,3,4},{4,3,2,1},{12,4,2,4}};
    int i,j;
    int suma=0;
    int (*wsk)[KOLUMNY];
    wsk=deszcz;
    for(i=0;i<WIERSZE;i++)
    {
        for(j=0;j<KOLUMNY;j++)
            suma+=*(*(wsk+i)+j);
    }
    printf("suma=%d\n",suma);
    return 0;
}
