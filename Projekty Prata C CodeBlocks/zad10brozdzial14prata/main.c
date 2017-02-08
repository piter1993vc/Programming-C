#include <stdio.h>
#include <stdlib.h>
struct paliwo
{
    float odleglosc;
    float litry;
    float kml;
};
void pobierz(struct paliwo *ropa);
int main()
{
    struct paliwo bmw={120.0,14};
   pobierz(&bmw);
printf("wynik w km/l to %.2f km/l\n",bmw.kml);
    printf("Hello world!\n");
    return 0;
}
void pobierz(struct paliwo *ropa)
{

 ropa->kml=ropa->odleglosc/ropa->litry;

}
