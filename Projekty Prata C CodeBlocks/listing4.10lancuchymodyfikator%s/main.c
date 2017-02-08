#include <stdio.h>
#include <stdlib.h>
#define NOTATKA "Doskonala gra aktorow"

int main()
{
    printf("*%s*\n",NOTATKA);
    printf("*%2s*\n",NOTATKA);
    printf("*%25.5s*\n",NOTATKA);
    printf("*%-25s*\n",NOTATKA);
    return 0;
}
