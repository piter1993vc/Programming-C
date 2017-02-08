
/*wyswietlanie zmiennej int na ekranie*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dziesiec=010;

    printf("Wlasciwy sposob:");
    printf("%d minus %d w %d\n", dziesiec, 2,dziesiec-2);
    printf("\n niewlasciwy sposob:");
    printf("%d minus %d w %d\n", dziesiec); /*brakuje 2 argumentow*/

    return 0;
}
