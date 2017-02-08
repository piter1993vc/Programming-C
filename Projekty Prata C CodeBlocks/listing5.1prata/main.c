#include <stdio.h>
#include <stdlib.h>
#define MNOZNIK 0.66666
#define KOREKTA -1

int main()
{
    double but,stopa;
    but=42.0;
    stopa=but*MNOZNIK+KOREKTA;
    printf("Rozmiar buta Rozmiar stopy\n");
    printf("%8.1f %15.2f cm\n",but,stopa);
    return 0;
}
