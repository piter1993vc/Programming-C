#include <stdio.h>
#include <stdlib.h>
#define MNOZNIK 0.66666
#define KOREKTA -1

int main()
{
    double but,stopa;
    but=24.00;
    printf("Rozmiar buta Rozmiar stopy\n");
    while(but<42)
    {
         stopa=but*MNOZNIK+KOREKTA;
    printf("%8.1f %15.2f cm\n",but,stopa);
    but=but+1.0;
    }
printf("Jezeli but pasuje to go nos\n");
    return 0;
}
