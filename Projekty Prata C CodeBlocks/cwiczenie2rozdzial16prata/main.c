#include <stdio.h>
#include <stdlib.h>
#define SH(X,Y) printf("srednia harmoniczna "#X" i " #Y " jest rowna %f\n",(2/((1/X)+(1/Y))))
int main()
{
    SH(2.0,4.0);
    return 0;
}
