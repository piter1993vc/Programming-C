#include <stdio.h>
#include <stdlib.h>
#define LICZBA -128.16

int main()
{
    printf("**%f**\n",LICZBA);
    printf("**%3f**\n",LICZBA);
    printf("**%15f**\n",LICZBA);
    printf("**%.0e**\n",LICZBA);
    printf("**%12.5e**\n",LICZBA);
    printf("**%-12.3e**\n",LICZBA);
    printf("**%012.2e**\n",LICZBA);
    printf("**%.0e**\n",LICZBA);
    printf("**%+12.1e**\n",LICZBA);
    return 0;
}
