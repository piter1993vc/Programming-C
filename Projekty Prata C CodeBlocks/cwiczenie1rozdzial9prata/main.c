#include <stdio.h>
#include <stdlib.h>
double min(double a,double b);
    int main()
{
    double x,y;
    printf("podaj 1 liczbe\n");
    scanf("%lf",&x);
    printf("podaj 2 liczbe\n");
    scanf("%lf",&y);
    printf("mniejsza z 2 podanych liczb to: %lf\n",min(x,y));
    return 0;
}
double min(double a,double b)
{
    float min;
    min=a;
    if(b<min) min=b;
    printf("min=%lf\n",min);
    return min;

}

