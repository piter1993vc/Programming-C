#include <stdio.h>
#include <stdlib.h>
#include <float.h>

void pokaz(int wiersze,int kolumny,float vla[wiersze][kolumny]);
void maxmin(int wiersze,int kolumny,float vla[wiersze][kolumny]);
int main()
{
    int rw;;
    int rk;
    int i,j;
    printf("Podaj wymiary tablicy wiersze x kolumny:\n");
    scanf("%d %d",&rw,&rk);

    float vla[rw][rk];
    printf("Podaj %d wierszy i %d kolumny liczb +/-(stalo/zmiennoprzecinkowych):\n",rw,rk);
    for(i=0; i<rw; i++)
    {
        for(j=0; j<rk; j++)
        {
           scanf("%f",&vla[i][j]);
           printf("[%d][%d]=%.2f\n",i,j,vla[i][j]);
        }

    }
    pokaz(rw,rk,vla);
    maxmin(rw,rk,vla);

    printf("\"Good Night Good Luck\" Dying Light -))");
    puts("\n");
    getchar(); getchar();
    return 0;
}
void pokaz(int wiersze,int kolumny,float vla[wiersze][kolumny])
{
    int i,j;
    for(i=0; i<wiersze; i++)
    {
        for(j=0; j<kolumny; j++)
        {
            printf("%5.2f  ",*(*(vla+i)+j));
        }
        putchar('\n');
    }
}
void maxmin(int wiersze,int kolumny,float vla[wiersze][kolumny])
{
    int i,j;
    int k,l;
    int m,n;
    float max=FLT_MIN;
    float min=FLT_MAX;

    for(i=0; i<wiersze; i++)
    {
        for(j=0; j<kolumny; j++)
        {
            if(vla[i][j]>max)
            {
              max=vla[i][j];
              k=i; l=j;
            }
            if(vla[i][j]<min)
            {
             min=vla[i][j];
             m=i; n=j;
            }
        }

    }
    printf("\nmaksymalna wartosc to: %f\n\n",max);
    printf("minimalna wartosc to: %f\n\n",min);
    printf("offset tablicy z maksymalna wartoscia to: [%d][%d]\n\n",k,l);
    printf("offset tablicy z minimalna wartoscia to:[%d][%d]\n\n",m,n);
    printf("roznica mieczy wartoscia max a min wynosi: %.2f\n\n",max-min);
}
