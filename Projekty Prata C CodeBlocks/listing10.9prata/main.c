#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 12
int main()
{
    int index;
    int miesiace[ROZMIAR]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("Hello world!\n");
    for(index=0;index<ROZMIAR;index++)
        printf("%d ",*(miesiace+index));
    return 0;
}
