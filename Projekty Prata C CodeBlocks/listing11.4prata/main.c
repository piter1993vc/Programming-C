#include <stdio.h>
#include <stdlib.h>
#define GR 81
int main()
{
    char imie[GR];
    printf("czesc podaj imie\n");
    gets(imie);
    printf("ladne imie %s\n",imie);
    return 0;
}
