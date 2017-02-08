#include <stdio.h>
#include <stdlib.h>
#define KWADR(X) (X*X)
#define PR(X) printf("Wynik wynosi %d\n",X)
int main()
{
    int x=4;
    int z;
    z=KWADR(x);
    PR(z);
    z=KWADR(2);
    PR(z);
    PR(KWADR(x+2));
    PR(100/KWADR(2));
    printf("x wynosi %d\n",x);
    PR(KWADR(++x));
    printf("po zwiekszeniu x wynosi %d\n",x);

    return 0;
}
