#include <stdio.h>
#include <stdlib.h>
#define POCHWALA "Ale masz ladnie na imie!"/*preprocesor*/

int main()
{
    char imie[40];
    printf("Prosze podaj swe imie: \n");
    scanf("%s",imie);
    printf("%s hehe %s\n",imie,POCHWALA);
    return 0;
}
