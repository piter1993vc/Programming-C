#include <stdio.h>
#include <stdlib.h>
#define POLA 64
#define PLON 9E14

int main()
{
    int pole=1;
    double ziarna,suma;

    printf("pole      ziarna             suma        ");
    printf("     roczny\n");
    printf("                                               plon USA\n");
    suma=ziarna=1.0;
    printf("%4d %12.2e %20.2e %15.2e\n",pole,ziarna,suma,suma/PLON);
    while(pole<POLA)
    {

        pole=pole+1;
        ziarna=ziarna*2;
        suma=suma+ziarna;
        printf("%4d %12.2e %20.2e %15.2e\n",pole,ziarna,suma,suma/PLON);

        }

    return 0;
}
