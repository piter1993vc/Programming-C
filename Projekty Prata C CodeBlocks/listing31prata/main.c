/* wartosc uzytkownika w zlocie w programie c */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float ciezar; /*ciezar uzytkownika*/
    float wartosc; /*wartosc uzytkownika w zlocie*/

    printf("Czy jestes wart tyle co twoj ciezar w zlocie?\n");
    printf("Sprawdzmy\n");
    printf("Podaj swoj ciezar w kilogramach: \n");
    scanf("%f",&ciezar);
    /*zakladamy ze cena zlota wynosi 1280 zlotych za uncje */
    /*32.151 to przelicznik kilograma na uncje */
    wartosc=32.151*ciezar*1280;
     printf("Twoj ciezar w zlocie jest wart %.2f zl.\n", wartosc);
      printf("Z pewnoscia jestes tyle wart\n");
       printf("w razie spadku kursu zlota wiecej jedz\n");
    return 0;
}
