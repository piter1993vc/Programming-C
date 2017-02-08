#include <stdio.h>
#include <stdlib.h>
#define SPACJA ' '
/*program zamienia znaki na znaki+1 w kodzie ascii, pomija spacje,konczy kiedy wpiszemy znak nowej linii*/
int main()
{
    char znak; /*definicja zmiennej znakowej*/
    printf("podaj znak: ");
    znak=getchar();

    while(znak!='\n') /*konczy sie gdy wpiszemy znak nowej linii*/
    {
        if(znak==SPACJA)
            putchar(znak); /*wyswietl znak*/
        else
            putchar(znak+1); /*wyswietl znak +1*/
            znak=getchar();

    }
    putchar(znak); /*przeskocz do kolejnego wiersza*/
    return 0;
}
