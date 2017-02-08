#include <stdio.h>
#define SEK_W_MIN 60

int main()
{
    
    int sek,min,reszta;
    printf("obliczenie liczby sekund xxx na format xx minut xx sekund\n");
    printf("prosze podac liczbe sekund\n");
    scanf("%d",&sek);
    min=sek/SEK_W_MIN;
    reszta=sek%SEK_W_MIN;
    printf("%d sekund jest rowne %d minut i %d sekund\n",sek,min,reszta);
    
    
    return 0;
}