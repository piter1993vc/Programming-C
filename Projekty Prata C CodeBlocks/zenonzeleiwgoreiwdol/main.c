#include <stdio.h>
#include <stdlib.h>

int main()
{
    int zakres;
    int licznik;
    float x,y;
    float suma=0.0;
    float roznica=2.0;
    printf("wprowadz zakres odcinkow Zenona \n");
    scanf("%d",&zakres);
    for(licznik=0,x=1.0;licznik<zakres;licznik++,x*=2)
    {

        suma+=1.0/x;
        printf("suma ciagu zenona dla %d wyrazu wynosi %.3lf:\n",licznik+1,suma);
    }
    printf("\n");
  for(licznik=0,x=1.0;licznik<zakres;licznik++,x*=2.0)
    {
        roznica-=1.0/x;

        printf("roznica ciagu zenona dla %d wyrazu wynosi %.3lf:\n",licznik+1,roznica);
    }
    return 0;
}
