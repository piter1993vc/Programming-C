#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 4
int main()
{
    short daty[ROZMIAR];
    short *wski;
    double rachunki[ROZMIAR];
    double *wskf;
    int index;
    wski=daty;
    wskf=rachunki;
    printf("%23s %10s\n","short","double");
    for(index=0;index<ROZMIAR;index++)
        printf("wskaznik+%d: %10p %10p\n",index,wski+index,wskf+index);
    printf("Hello world!\n");
    return 0;
}
