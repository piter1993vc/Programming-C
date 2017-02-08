#include <stdio.h>
#include <stdlib.h>
#define MAX 81

int main()
{
    char imie[MAX];
    char *wsk;
    char ch;
    printf("czesc jak masz na imie?\n");
    wsk=fgets(imie,MAX,stdin);
    printf("%s A! %s\n",imie,wsk);
    printf("Hello world!\n");

    return 0;
}
