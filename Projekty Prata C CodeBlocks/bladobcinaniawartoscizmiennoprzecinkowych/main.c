#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    a=2.0e20+1.0;
    b=a-2.0e+20;

    printf("b czyli %e jest rowne 2e20+1-2e20?wynik 1?!\n",b);
    printf("nie bo dodajemy 20sta cyfre znaczoca!\n",b);

    return 0;
}
