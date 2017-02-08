#include <stdio.h>
#include <stdlib.h>
struct paliwo
{
    float odleglosc;
    float litry;
    float kml;
};
struct paliwo pobierz(struct paliwo ropa);
int main()
{
    struct paliwo bmw={120.0,14};
    bmw=pobierz(bmw);
printf("wynik w km/l to %.2f km/l\n",bmw.kml);
    printf("Hello world!\n");
    return 0;
}
struct paliwo pobierz(struct paliwo ropa)
{
    struct paliwo temp;
  temp.kml=ropa.odleglosc/ropa.litry;
  return temp;
}
