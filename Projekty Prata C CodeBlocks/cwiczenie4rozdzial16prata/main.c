#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int sekundy;
    double time_1,time_2;

    printf("podaj liczbe sekund:\n");
    while((scanf("%d",&sekundy))!=1)
    {
        printf("popraw sie szpryco:");

    }
    printf("odliczanie:");
    time_1=clock();

     while(time_2=clock()!=(time_1+sekundy*(CLOCKS_PER_SEC)))
     {


     }
     printf("koniec!");





    return 0;
}
