#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 80
int main()
{
    char tablica[MAX];
    fputs("wpisz zdziro wierszyk\n",stdout);
    fgets(tablica,MAX,stdin);
    fputs(tablica,stdout);
    return 0;
}
