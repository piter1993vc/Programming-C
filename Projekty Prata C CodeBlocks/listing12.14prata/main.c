#include <stdio.h>
#include <stdlib.h>

int main()
{
    double *wsk;
    int max;
    int liczba;
    int i=0;
    printf("podaj maksymalna liczbe elementow (typu double):\n");
    scanf("%d",&max);
    wsk=(double*) malloc(max*sizeof(double));
    if(wsk==NULL)
    {
        printf("przydzial pamieci nie powiodl sie\n");
        exit(EXIT_FAILURE);
    }
    puts("podaj elementy (k to koniec)");
    while(i<max&&scanf("%lf",&wsk[i])==1)
    ++i;
    printf("oto %d wprowadzonych danych\n",liczba=i);
    for(liczba=0;liczba<i;liczba++)
    {
        printf("%7.2f ",wsk[liczba]);
        if(i%7==6)
            putchar('\n');
    }
        if(i%7!=0)
            putchar('\n');
        puts("koniec");
        free(wsk);



    return 0;
}
