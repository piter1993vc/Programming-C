#include <stdio.h>
#include <stdlib.h>
float szescian(float n);
int main()
{
    float n;
    printf("podaj liczbe zmiennoprzecinkowa\n");
    scanf("%f",&n);
    printf("liczba podniesiona do szescianu wynosi %f\n",szescian(n));

    return 0;
}
float szescian(float d)
{
   float k,l;
k=d*d;
l=k*d;
return l;

}


