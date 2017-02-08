/*wylicza srednia ,max,min,z podanego zakresu  liczb wpisywanych z klawiatury*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 100.00f /*maksymalny zakres liczb*/
#define MIN 0.00f /*minimalny zakres liczb*/

int main()
{
    float max=MIN; /*minimalny zakres dla wartosci max*/
    float min=MAX; /*maksymalny zakres dla wartosci min*/
    float wynik; /*pojemnik na dane wejsciowe*/
    int n=0; /*licznik prawidlowych liczb*/
    float suma=0.00f; /*suma prawidlowych liczb*/
    printf("podaj liczbe zmiennoprzecinkowa lub znak aby zakonczyc: \n"); /*strumien wejsciowy*/
    while(scanf("%f",&wynik)==1) /*sprawdzenie poprawnosci danej wejsciowej z uzytym specyfikatorem*/
    {
        if(wynik>MAX || wynik< MIN) /*test na zawieranie sie liczby w przyjetym zakresie*/
        {
            printf("podano liczbe nie z zadanego zakresu od :%.2f do : %.2f\n",MIN,MAX); /*komunikat o przekroczeniu zakresu*/
            continue; /*skok na poczatek petli while*/
        }
        printf("przyjeto do pamieci liczbe : %.2f\n",wynik); /*komunikat o poprawnosci danej wejsciowej co do typu i zakres*/
        min=(wynik<min)?wynik:min; /*wylicznie wartosci minimalnej*/
        max=(wynik>max)?wynik:max; /*wyliczenie wartosci amksymalnej*/

        n++; /*licznik prawidlowych danych wejsciowych*/
        suma+=wynik;/*sumowanie prawidlowych liczb co do zakresu i typu*/
        printf("Srednia z liczb wynosi : %.2f, wartosc maksymalna to : %.2f, a minimalna to :%.2f.\n",suma/n,max,min);/*oblicza srednia max,min w locie */
        printf("podaj liczbe zmiennoprzecinkowa lub znak aby zakonczyc: \n"); /*strumien wejsciowy*/
    }
    if(n==0)

            printf("Nie podano zadnej liczby \n"); /*komunikat o wpisaniu zlego typu danej prawdopodobnie "alpha"<<--litera*/

    printf("\"good night and good luck\" Dying Light\n");
    return 0;
}
