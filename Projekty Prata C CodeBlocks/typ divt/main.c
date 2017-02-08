#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=12;
    int b=16;
    div_t wynik=div(a,b);
    printf("wynik to %d\n",wynik.quot);
    printf("reszta z dzielenia  to %d\n",wynik.rem);
    printf("Hello world!\n");
    return 0;
}
