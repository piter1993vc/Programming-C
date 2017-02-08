#include <stdio.h>
#include <stdlib.h>
void gora_dol(int n);

int main()
{
    gora_dol(1);
    printf("Hello world!\n");
    return 0;
}
void gora_dol(int n)
{
    printf("%d poziom rekurencji, adres zmiennej n: %p\n",n,&n);
    if(n<20)
        gora_dol(n+1);
        printf("%d poziom rekurencji, adres zmiennej n: %p\n",n,&n);
}

