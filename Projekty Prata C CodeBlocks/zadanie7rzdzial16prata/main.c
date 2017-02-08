#include <stdio.h>
#include <stdlib.h>
#define MAKRO(X) printf("nazwa: "#X" wartosc:%d adres: %p\n",X,&X)

int main()
{
    int gowno=42;
    MAKRO(gowno);

    return 0;
}
