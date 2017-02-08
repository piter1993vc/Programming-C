#include <stdio.h>
#include <stdlib.h>
#define S_W_M 60
#define S_W_H 3600

int main()
{
    double dyst;
    double predkosc;
    int min,sek;
    int czas;
    double czas_km;
    int min_km,sek_km;
    printf("Ten program zmienia Twoj czas w biegu na dowolny dystans\n");
    printf("na czas przebiegniecia 1km oraz na srednia predkosc w km/h\n");
    printf("wpisz pokonana odleglosc w kilometrach.\n");
    scanf("%lf", &dyst);
    printf("wpisz swoj czas w minutach i sekundach.\n");
    printf("zacznij od minut.\n");
    scanf("%d", &min);
    printf("wpisz liczbe sekund.\n");
    scanf("%d", &sek);
    czas=S_W_M*min+sek;
    predkosc=dyst/ czas*S_W_H;
    czas_km=(double) czas/dyst;
    min_km=(int) czas_km/S_W_M;
    sek_km=(int)czas_km%S_W_M;
    printf("przebiegles %1.2f km w czasie %d minut %d sekund\n",dyst,min,sek);
    printf("odpowiada to przebiegnieciu 1 km w czasie %d minut i %d sek\n",min_km,sek_km);
    printf("twoja srednia predkosc to %1.2f km/h\n",predkosc);

    return 0;
}
