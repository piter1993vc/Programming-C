#include <stdio.h>
#include <stdlib.h>
#define MAX 20
int main()
{
    char wiersz[MAX];
    while(fgets(wiersz,MAX,stdin)!=NULL&&wiersz[0]!='\n')
        fputs(wiersz,stdout);
    return 0;
}
