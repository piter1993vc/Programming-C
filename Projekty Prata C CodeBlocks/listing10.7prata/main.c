#include <stdio.h>
#include <stdlib.h>
#define LATA 5
#define MIESIACE 12
int main()
{
    int rok;
    int miesiac;
    float suma=0;
    float podsuma=0;

    const float deszcz[LATA][MIESIACE] =
    {
        {4.3,4.2,3.7,2.1,8.5,3,2,5,7,9,2,1},
        {4.3,4.2,3.7,2.1,8.5,3,2,5,7,9,2,1},
        {4.3,4.2,3.7,2.1,8.5,3,2,5,7,9,2,1},
        {4.3,4.2,3.7,2.1,8.5,3,2,5,7,9,2,1},
        {4.3,4.2,3.7,1.1,8.5,3,2,5,7,9,2,1},


    };
     printf("ROK           OPADY(w calach)\n");

    for(rok=0;rok<LATA;rok++)
{
    for(miesiac=0;miesiac<MIESIACE;miesiac++)
        podsuma+=deszcz[rok][miesiac];
        printf(" %4d  %.2f\n",2000+rok,podsuma);
suma+=podsuma;
}

printf("Roczna srednia opadow wynosi %.2f\n",suma/LATA);
printf("srednie miesieczne:\n");
printf(" sty lu mar kw maj czer lip sier wrz paz lis gru\n");
for(miesiac=0;miesiac<MIESIACE;miesiac++)
{
    for(rok=0,podsuma=0;rok<LATA;rok++)
        podsuma+=deszcz[rok][miesiac];
    printf("%.1f ",podsuma/LATA);
}

    return 0;
}
