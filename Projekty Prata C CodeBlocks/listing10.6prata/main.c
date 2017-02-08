#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 4
int main()
{
    int zm1=44;
    int tab[ROZMIAR];
    int zm2=32;
    int i;
    printf("zm1=%d zm2=%d\n",zm1,zm2);
    for(i=-1;i<=ROZMIAR;i++)
    tab[i]=2*i+1;
    for(i=-1;i<7;i++)
        printf("%d %d\n",i,tab[i]);
    printf("zm1=%d zm2=%d\n",zm1,zm2);
    printf("Hello world!\n");
    return 0;
}
