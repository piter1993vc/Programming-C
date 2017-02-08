#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned szerokosc, dokladnosc;
    int liczba=34;
    double waga=34.56432;


    printf("Prosze podaj szerokosc: \n");
    scanf("%d",&szerokosc);
    printf("liczba w polu o szerokosci %d to %*.d\n",szerokosc,szerokosc,liczba);
    printf("prosze podaj szerokosc i dokladnisc\n");
    scanf("%d %d",&szerokosc,&dokladnosc);
    printf("waga w polu o szerokosci %d i dokladnosci %d to %*.*f\n",szerokosc,dokladnosc,szerokosc,dokladnosc,waga);
    return 0;
}
