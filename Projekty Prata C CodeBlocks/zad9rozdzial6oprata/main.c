#include <stdio.h>
#include <stdlib.h>
# define ROZMIAR 8

int main()
{
    int liczby[ROZMIAR];
    int licznik;

    printf("wprowadz 8 liczb calkowitych: \n");
    for(licznik=0;licznik<ROZMIAR;licznik++)
        scanf("%d",&liczby[licznik]);
    printf("wprowadzone liczby od konca to:\n");
    for(licznik=(ROZMIAR-1);licznik>=0;licznik--)
    {
         printf("%d",liczby[licznik]);
        printf("\n");
    }


    return 0;
}
