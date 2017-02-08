#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba,licznik;
    printf("Prosze podaj liczbe calkowita\n");
    scanf("%d",&liczba);
  licznik=liczba+10;
while(liczba<=licznik)
{
       printf("%d\n",liczba);
       liczba++;
}

    return 0;
}
