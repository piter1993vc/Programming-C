#include <stdio.h>
#include <stdlib.h>
void koniec(void);
void wpadka(void);
int main()
{
    int n;
    atexit(koniec);
    printf("podaj liczbe calkowita:\n");
    if((scanf("%d",&n))!=1)
    {
      atexit(wpadka);
      exit(EXIT_FAILURE);
    }
    printf("%d jest %s\n",n,(n%2==0)?"parzysta":"nieparzysta");
    return 0;
}
void koniec(void)
{
    printf(" koniec,udalo sie!");
}
void wpadka(void)
{
    printf(" wpadles!,guma pekla");
}
