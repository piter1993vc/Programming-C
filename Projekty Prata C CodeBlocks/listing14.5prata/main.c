#include <stdio.h>
#include <stdlib.h>
#define MAX 40
struct oszczednosci {
char bank[MAX];
double bankfund;
char oszcz[MAX];
double oszczfund;
};
double suma(double x,double y);

int main()
{
    struct oszczednosci edek={
    "Bank Czosnkowo-Melonowy",
    202472,
    "Kasa Oszczednosciowo-Pozyczkowa \"Debet\"",
    8327.12
    };

    printf("Edek posiada teraz %.2f zl\n",
           suma(edek.bankfund,edek.oszczfund));
    return 0;
}
double suma(double x,double y)
{
    return(x+y);
}
