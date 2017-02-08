#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pensja;
    printf("podaj swoje miesieczne oczekiwane wynagrodzenie");
    printf("________zl\b\b\b\b\b\b\b\b\b\b");
    scanf("%f",&pensja);
    printf("\n\t%.2f zl miesiecznie to %.2f zl rocznie",pensja,pensja*12.0);
    printf("\r Ho, Ho!\n");
   /* t tabulacha r return \b backspace o 1 cofniecie*/
    return 0;
}
