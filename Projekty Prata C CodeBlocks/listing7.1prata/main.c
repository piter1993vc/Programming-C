#include <stdio.h>
#include <stdlib.h>
#define MROZ 0
#define SKALA "Celciusza"

int main()
{
    float temperatura;
    int mrozne_dni=0;
    int wszystkie_dni=0;

    printf("prosze podaj temperature w stopniach %s\n",SKALA);
    while(scanf("%f",&temperatura)==1)
    {
        wszystkie_dni++;
        if(temperatura<MROZ)
            mrozne_dni++;

    }
    if(wszystkie_dni!=0)
        printf("wpisano %d dni z czego %d dni mroznych stanowi ich odsetek w postaci %2.0f %% \n",wszystkie_dni,mrozne_dni,(float)(100*mrozne_dni)/wszystkie_dni);
    if(wszystkie_dni==0)
        printf("blad wpisywania temperatur\n");
    return 0;
}
