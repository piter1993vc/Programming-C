#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int rzedy=4;
    const int kolumny=10;
    int licznik1,licznik2;
    char znak;
    int wartosc;
    int i,j,lista[10];

    /*zad1*/
    int miau=2;
    miau+=5;
    miau*=10;
    miau-=6;
    miau/=8;
    miau%=3;
    printf("miau=%d\n",miau);

    /*zad2*/

    for(wartosc=36; wartosc>0; wartosc/=2)
        printf("wartosc=%3d",wartosc);

    /*zad5**/
    printf("podaj 9 liczb calkowitych\n");
    for(i=0; i<10; i++)
        scanf("%d",&lista[i]);
    printf("wpisane wartosci to:n");
    for(j=0;j<10;j++)
        {
        printf("%4d",lista[j]);
        printf("\n");
        }
        /*zadanie 6*/
        for(licznik1=0;licznik1<=rzedy;licznik1++)
        {
            for(znak='$',licznik2=1;licznik2<=kolumny;znak='$',licznik2++)
                printf("%c",znak);
                printf("\n");

        }




    return 0;
}
