#include <stdio.h>
#include <stdlib.h>


int main()
{
    const int wiersze=5;
    const int kolumny=5;
    int licznik1,licznik2,k;
    for(licznik1=0;licznik1<wiersze;licznik1++)
    {
        k=kolumny-licznik1;
      for(licznik2=k;licznik2<=kolumny;licznik2++)
        printf("$");
      printf("\n");


    }
    printf("Hello world!\n");
    return 0;
}
