#include <stdio.h>
#include <stdlib.h>
extern int rand();
int main()
{
    int liczba;
    for(liczba=0;liczba<5;liczba++)
        printf("%d\n",rand());

    return 0;
}
