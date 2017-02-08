#include <stdio.h>
#include <stdlib.h>
#define MROZ 0
#define SKALA "Celciusza"
/*program obliczajacy odsetem dni mroznych podczas wszystkich dni*/
int main()
{
    float temperatura; /*deklaracja zmiennej temperatura*/
    int mrozne_dni=0; /*deklaracja mroznych dni*/
    int wszystkie_dni=0; /*deklaracja wszystkich dni*/


    printf("prosze podaj temperature w stopniach %s\n",SKALA);
    while(scanf("%f",&temperatura)==1) /*warunek konieczny do zliczania dni*/
    {
        wszystkie_dni++;/*inkrementacja wszystkich dni*/
        if(temperatura<MROZ)
            mrozne_dni++;/*inkrementuje gdy powyzszy warunek spelniony*/

    }
    if(wszystkie_dni!=0) /*gdy wpisalismy przynajmniej raz temperature*/
        printf("wpisano %d dni z czego %d dni mroznych stanowi ich odsetek w postaci %2.0f %% \n",wszystkie_dni,mrozne_dni,(float)(100*mrozne_dni)/wszystkie_dni);
    else /*gdy nie wpisalismy nawet raz temperatury tylko znak  lub litere*/
        printf("blad wpisywania temperatur\n");
    return 0;
}
