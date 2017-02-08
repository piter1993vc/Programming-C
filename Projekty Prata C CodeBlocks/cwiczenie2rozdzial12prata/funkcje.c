#include <stdio.h>
#include "funkcje.h"
static int wybor;
static float dystans;
static float paliwo;
void pobierz_dane(void)
{

    if(wybor==0)
            {
            printf("wprowadz przebyta odleglosc w kilometrach:\n");
            scanf("%f",&dystans);
            printf("wprowadz zyzyte paliwo w litrach\n");
            scanf("%f",&paliwo);
            }

    if(wybor==1)
            {
            printf("wprowadz przebyta odleglosc w milach:\n");
            scanf("%f",&dystans);
            printf("wprowadz zyzyte paliwo w galonach\n");
            scanf("%f",&paliwo);

            }



}
void wyswietl_dane(void)
{
        if(wybor==0)
            {
            printf("zyzycie paliwa wynioslo %.2f litrow na kilometr\n",100*(paliwo/dystans));

            }

    if(wybor==1)
            {
            printf("zuzycie paliwa wynioslo %.2f mil na galon \n",dystans/paliwo);
            }
}
void wybierz_tryb(int tryb)
{
    if(tryb==0)
            {
            wybor=0;
            }

    if(tryb==1)
            {
            wybor=1;
            }


}
