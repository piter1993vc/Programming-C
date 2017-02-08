#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int zakres=300;

    int x=zakres/2;
    int y=zakres/2;


    printf("pomysl liczbe od 1 do %d sprobuje ja odgadnac\n",zakres);
    printf("jezeli odgadlem wcisnij t  jezeli wieksza to w jezeli mniejsza to m\n");
    printf("czy twoja liczba jest rowna wieksza czy mniejsza od %d\n",zakres/2);

    while((ch=getchar())!='t')
    {
        if(ch=='\n')
            continue;
            if(ch=='w')
            {
                     x/=2;

                 y+=x;
                 printf("czy twoja poszukiwana liczba to %d lub wieksza czy mniejsza\n",y);
            }


                if(ch=='m')
                {
                              x/=2;
                y-=x;
                printf("czy twoja poszukiwana liczba to %d lub wieksza czy mniejsza\n",y);
                }






        }



    printf("brawo zgadlem\n");

return 0;
}
