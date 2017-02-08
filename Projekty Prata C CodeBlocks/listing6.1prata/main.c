#include <stdio.h>
#include <stdlib.h>

int main()
{
    long num;
    long suma=0L;
    int stan;
    printf("wpisz liczbe calkowita");
     printf("wpisz litere aby zakonczyc\n");
     stan=scanf("%d",&num);
     while(stan==1)
     {
            suma+=num;
     printf("podaj kolejna liczbe calkowita");
       printf("wpisz litere aby zakonczyc\n");
       stan=scanf("%d",&num);

     }
     printf("dzieki suma podanych liczb wynosi %d\n",suma);
    return 0;
}
