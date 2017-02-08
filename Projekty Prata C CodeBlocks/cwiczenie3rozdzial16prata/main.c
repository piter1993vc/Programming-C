#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double dlugosc;
    double kat;
    double x,y;
    printf("podaj dlugosc wektora w centymetrach oraz kat w stopniach:\n");
    while((scanf("%lf %lf",&dlugosc,&kat))==2)
    {
        x=dlugosc*cos(kat*M_PI/180);
        y=dlugosc*sin(kat*M_PI/180);
        printf("wspolrzedna x=%lf, wspolrzedna y=%lf\n",x,y);
    }


    return 0;
}
