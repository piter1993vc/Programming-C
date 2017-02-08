#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int wiersze=6;
    const int kolumny=6;
    int licznik1,licznik2;
    char znak;
    for(licznik1=0;licznik1<wiersze;licznik1++)
    {
        for(znak='F',licznik2=(kolumny-licznik1);licznik2<=kolumny;znak--,licznik2++)
            printf("%c",znak);
        printf("\n");
    }
    printf("Hello world!\n");
    return 0;
}
