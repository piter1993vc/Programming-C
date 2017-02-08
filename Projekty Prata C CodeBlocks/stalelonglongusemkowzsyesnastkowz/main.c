/*wlasnosci funkcji printf() przy wyswietlaniu zmiennych dla specyfikatorów*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int un=3000000000;
    short sn=200;
    long ln=65537;
    printf("un=%u a nie %d\n",un,un);
    printf("sn=%hd i %d\n",sn,sn);
    printf("ln=%ld a nie %hd\n",ln,ln);

    return 0;
}
