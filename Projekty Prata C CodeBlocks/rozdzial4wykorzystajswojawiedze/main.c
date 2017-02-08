#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nazwisko[40];
    float hajsy;
    printf("Podaj swoje nazwisko!\n");
    scanf("%s",nazwisko);
      printf("Podaj ile chcesz hajsow !\n");
    scanf("%f",&hajsy);
      printf("Rodzina %s wlasnie wzbogacila sie o %.2f hajsow gratulacje!\n",nazwisko,hajsy);

    return 0;
}
