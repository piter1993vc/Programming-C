/*oblicza pole powoerzchni prostokata,uwzglednia zle wpisane dane i konczy program*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dlugosc; /*definicja zmiennej dlugosc prostokata*/
    float szerokosc; /*definicja zmiennej szerokosc prostokata*/


    printf("Wpisz dlugosc prostokata: \n");/*prosba o dlugosc prostokata*/
    while((scanf("%f",&dlugosc))==1)
          {
                 printf("Wpisana dlugosc to: %.2f m \n",dlugosc);/*strumien wyjsciowy programu*/
                 printf("Wpisz szerokosc prostokata: \n");/*prosba o szerokosc prostokata*/
                 if((scanf("%f",&szerokosc))!=1)
                    break;
                 printf("Wpisana szerokosc to: %2f m\n",szerokosc);
                 printf("Obliczona wartosc pola prostokata to: %.2f %s\n",dlugosc*szerokosc,(dlugosc*szerokosc==1)?"metr kwadratowy":"metrow kwadratowych");
                 printf("Wpisz dlugosc prostokata: \n");/*prosba o dlugosc prostokata*/

          }

    printf("Dzieki za wspolprace\n");
    return 0;
}
