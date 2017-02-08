#include <stdio.h>
#include <stdlib.h>
#define RZEDY 7
#define KOLUMNY 8
int main()
{
      int licznik;
    char znak,x;
    printf("wprowadz znak\n");
    scanf("%c",&x);
;
    for(licznik=0;licznik<RZEDY;licznik++)
    {
        for(znak=x;znak<=(x+KOLUMNY);znak++)
            printf("%c",znak);
        printf("\n");
    }

    return 0;
}
