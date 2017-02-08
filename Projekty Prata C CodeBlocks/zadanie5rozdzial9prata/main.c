#include <stdio.h>
#include <stdlib.h>
double suma(double a,double b);
int main()
{
    double x;
    double y;
    double z;



    printf("podaj 1 liczbe double\n");
    scanf("%lf",&x);
    printf("podaj 2 liczbe double\n");
    scanf("%lf",&y);
    z=suma(x,y);
    printf("x+y=%.2lf\n",z);
    return 0;
}
double suma(double a,double b)
{
    return a+b;
}
