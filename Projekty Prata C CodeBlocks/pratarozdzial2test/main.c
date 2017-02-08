
/*rozdzial 2 prata test c*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int wiek, dni_zycia;
    printf("----------------------zadanie 1---------------\n");/*numer zadania*/

    printf("Piotr Buchcic\n"); /*pierwsza instrukcja prypisania */
    printf("Piotr \nBuchcic\n"); /*druga instrukcja przypisania */
    printf("Piotr"); /*trzenia instrukcja przypisania */
    printf(" Buchcic\n"); /*czwarta instrukcja przypisania */
    printf("----------------------zadanie 2---------------\n");
    printf("Piotr Buchcic 26-067 Str \n");
    printf("----------------------zadanie 3---------------\n");
    printf("Wpisz swoj wiek: ");
    scanf("%d", &wiek);
    dni_zycia=wiek*365;
    printf("zyjesz %d dni",dni_zycia);
    printf("\n----------------------zadanie 4---------------\n");
    printf("Panie Janie!\nPanie Janie!\n");
    printf("Rano wstan!\n");
    printf("\n----------------------zadanie 5---------------\n");
    int liczba=10;
    printf("Liczba wyosi %d, Podwojona liczba wynosi %d, Kwadrat liczby jest rowny %d\n",liczba,liczba*2,liczba*liczba);
     printf("\n----------------------zadanie 6---------------\n");
      printf("Usmiech! Usmiech! Usmiech!\n");
      printf("Usmiech! Usmiech!\n");
      printf("Usmiech!\n");






    return 0;
}
