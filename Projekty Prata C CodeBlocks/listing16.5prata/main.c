#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PR(X, ...) printf("Wiadomosc " #X ":" __VA_ARGS__)

int main()
{
    double x=48;
    double y;
    y=sqrt(x);
    PR(1, "x=%g\n",x);
    PR(2, "x=%g,y=%g\n",x,y);
    return 0;
}
