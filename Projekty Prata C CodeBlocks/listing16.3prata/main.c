#include <stdio.h>
#include <stdlib.h>
#define PKW(X) printf("kwadratem liczby " #X " jest %d\n",((X)*(X)));
int main()
{
    int y=5;
    PKW(y);
    PKW(2+4);
    return 0;
}
