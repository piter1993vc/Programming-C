#include <stdio.h>
#include <stdlib.h>
#define Xnazwa(n) x##n
#define WYPISZ_XN(n) printf("x" #n "=%d\n",x##n)
int main()
{
    int x1=15;
    int x2=32;
   WYPISZ_XN(1);
   WYPISZ_XN(2);
    return 0;
}
