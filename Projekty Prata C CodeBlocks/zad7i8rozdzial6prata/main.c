#include <stdio.h>
#include <stdlib.h>
float wynik(float a, float b);
int main()
{
    float x,y,z;
    printf("Wprowadz 2 liczby zmiennoprzecinkowe\n");
    scanf("%f %f",&x,&y);
    z=wynik(x,y);
    printf("roznica liczb podzielona przez ich iloczyn jest rowna %f",z);

    return 0;
}
float wynik(float a, float b)
{
    float roznica;
    float iloczyn;
    float c;
    roznica=a-b;
    iloczyn=a*b;
    c=roznica/iloczyn;
    return c;

}
