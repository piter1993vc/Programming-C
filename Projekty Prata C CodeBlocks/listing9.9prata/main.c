#include <stdio.h>
#include <stdlib.h>
#include "hotel.h"

int main()
{
    int noce;
    double hotel;
    int kod;
    while((kod=pobierz_kod())!='q')
    {
        switch(kod)
        {
        case 'a':
            hotel=HOTEL1;
            break;
        case 'b':
            hotel=HOTEL2;
            break;
        case 'c':
            hotel=HOTEL3;
            break;
        case 'd':
            hotel=HOTEL4;
            break;
            default: printf("zly wybor\n");
            hotel=0.0; break;

        }
        noce=pobierz_noce();
        pokaz_cene(hotel,noce);
            }

    return 0;
}
