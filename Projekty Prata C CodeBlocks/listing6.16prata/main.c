#include <stdio.h>
#include <stdlib.h>
#define RZEDY 7
#define KOLUMNY 6

int main()
{
    int licznik;
    char znak;
    for(licznik=0;licznik<RZEDY;licznik++)
    {
        for(znak=('c'+licznik);znak<('c'+KOLUMNY);znak++)
            printf("%c",znak);
            printf("\n");
    }
    printf("Hello world!\n");
    return 0;
}
