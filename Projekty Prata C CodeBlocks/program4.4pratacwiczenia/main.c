#include <stdio.h>
#include <stdlib.h>

int main()
{
    int wzrost;
    float wzrost_w_m;
    char imie[40];
    printf("podaj swoje imie\n");
    scanf("%s",imie);

    printf("podaj swoj wzrost w cm\n");
    scanf("%d",&wzrost);
    wzrost_w_m=wzrost/100.00;
    printf("%s, masz %.2f m wzrostu!\n",imie,wzrost_w_m);

    return 0;
}
