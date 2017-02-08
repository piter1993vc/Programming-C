#include <stdio.h>
#include <stdlib.h>
#define DNI_W_T 7

int main()
{
    int dni,tygodnie,reszta;
   skok:
    printf("Podaj liczbe dni jezeli chcesz zakonczyc to wpisz 0\n");
    scanf("%d",&dni);
while(dni!=0)
    {
        tygodnie=dni/DNI_W_T;
        reszta=dni%DNI_W_T;
        printf("%d dni to %d tygodni i %d dni\n",dni,tygodnie,reszta);
        goto skok;
    }
    printf("koniec\n");


    return 0;
}
