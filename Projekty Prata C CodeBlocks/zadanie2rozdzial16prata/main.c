#include <stdio.h>
#include <stdlib.h>
#define MAKRO(X,Y) printf(#X " to %d a " #Y " to %d\n",X,Y)
int main()
{
    MAKRO(2+3,4-5);

    return 0;
}
