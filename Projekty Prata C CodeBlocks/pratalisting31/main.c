/*przeliczanie masy ciala na uncje zlota i hajsy*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ciezar, wartosc,kurs_zlota;

    printf("podaj swoj ciezar w kilogramach: ");
    scanf("%f", &ciezar);
    printf("podaj kurs zlota za 1 sztuke uncji: ");
    scanf("%f", &kurs_zlota);
    float przelicznik=32.151;/*ilosc uncji zlota w 1 kilogramie*/
    wartosc=ciezar*kurs_zlota*przelicznik;
    printf("jestes wart %.2f zl",wartosc);




    return 0;
}
