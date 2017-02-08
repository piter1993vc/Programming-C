#include <stdio.h>
#include <stdlib.h>
#include <float.h>

void pokaz(int wiersze,int kolumny,float vla[wiersze][kolumny]);
void maximum(int wiersze,int kolumny,float vla[wiersze][kolumny]);
int main()
{
    int rw=3;
    int rk=3;
    int i,j;

    float vla[rw][rk];
    printf("podaj 3 wiersze i 3 kolumny liczb\n");
    for(i=0; i<rw; i++)
    {
        for(j=0; j<rk; j++)
            scanf("%f",&vla[i][j]);
    }
    pokaz(rw,rk,vla);
    maximum(rw,rk,vla);

    printf("Hello world!\n");
    return 0;
}
void pokaz(int wiersze,int kolumny,float vla[wiersze][kolumny])
{
    int i,j;
    for(i=0; i<wiersze; i++)
    {
        for(j=0; j<kolumny; j++)
            printf("%-.2f  ",*(*(vla+i)+j));
        putchar('\n');
    }
}
void maximum(int wiersze,int kolumny,float vla[wiersze][kolumny])
{
    int i,j;
    float max;
    max=FLT_MIN;
    for(i=0; i<wiersze; i++)
    {
        for(j=0; j<kolumny; j++)
        {
            if(vla[i][j]>max) max=vla[i][j];
        }

    }
    printf("maksymalna wartosc to %f\n",max);
}
