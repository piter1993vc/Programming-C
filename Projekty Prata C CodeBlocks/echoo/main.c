#include <stdio.h>
#include <stdlib.h>
#define MAX 40
int main()
{
    char tab[MAX];
    while(fgets(tab,MAX,stdin)!=NULL&&tab[0]!='\n')
    {
        fputs(tab,stdout);

    }
    printf("Hello world!\n");
    return 0;
}
