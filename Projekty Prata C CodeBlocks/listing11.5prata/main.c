#include <stdio.h>
#include <stdlib.h>
#define MAX 81
int main()
{
    char imie[MAX];
    char *wsk;
    printf("czesc jak masz na imie?\n");
    wsk=gets(imie);

    printf("%s? a! %s\n",imie,wsk);
    return 0;
}
