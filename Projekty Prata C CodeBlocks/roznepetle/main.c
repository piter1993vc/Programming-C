#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int proba=1;
    const double WYNIK=3.14159;
    double odpowiedz;
    printf("ile wynosi liczba pi\n");
    scanf("%lf",&odpowiedz);
    while(fabs(odpowiedz-WYNIK)>0.0001)

{

    printf("to twoja %d proba",proba);
    printf(" Sprobuj ponownie\n");
    scanf("%lf",&odpowiedz);
    proba++;


}
printf("brawo zgadles w %d probie\n",proba);

    return 0;
}
