#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("podaj prosze 4 liczby\n");
    scanf("%*d %*d %d %*d",&n,&n,&n,&n);
    printf("trzecia liczba podana to %d\n",n);
    return 0;
}
