#include <stdio.h>
#include <stdlib.h>

void pobierz_dane(int wybor);
int main()
{
    int tryb;
    printf("wybierz :0-system metryczny,1-system us:\n");

    while( scanf("%d",&tryb)==1&&tryb>=0)
    {

        pobierz_dane(tryb);

        printf("wybierz : 0-system metryczny,1-system US ");
        printf("-1 aby zakonczyc\n");

    }
    printf("koniec\n");
    return 0;
}

void pobierz_dane(int wybor)
{
    float dystans,paliwo;

    if(wybor==0)
            {
            printf("wprowadz przebyta odleglosc w kilometrach:\n");
            scanf("%f",&dystans);
            printf("wprowadz zyzyte paliwo w litrach\n");
            scanf("%f",&paliwo);
                  printf("zyzycie paliwa wynioslo %.2f litrow na kilometr\n",100*(paliwo/dystans));

            }

    if(wybor==1)
            {
            printf("wprowadz przebyta odleglosc w milach:\n");
            scanf("%f",&dystans);
            printf("wprowadz zyzyte paliwo w galonach\n");
            scanf("%f",&paliwo);
              printf("zuzycie paliwa wynioslo %.2f mil na galon \n",dystans/paliwo);

            }



}





