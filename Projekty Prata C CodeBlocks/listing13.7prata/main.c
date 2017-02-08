#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000


int main()
{
    double liczby[MAX];
    double wartosc;
    const char *plik="kutas.dat";
    int i;
    int j;
    long poz;
    FILE *wewy;
    for(i=0;i<MAX;i++)
        liczby[i]=100.0*i+1.0/(1+i);
    if((wewy=fopen(plik,"wb"))==NULL)
    {
        fprintf(stdout,"nie udalo sie utworzyc pliku %s\n",plik);
        exit(1);
    }
        fwrite(liczby,sizeof(double),MAX,wewy);
        fclose(wewy);
        if((wewy=fopen(plik,"rb"))==NULL)
        {
            fprintf(stdout,"nie udalo sie otworzyc pliku %s\n",plik);
            exit(2);
        }
        printf("podaj indeks z przedzialu 0-%d\n",MAX-1);
        scanf("%d",&j);
        while(j>=0&&j<MAX)
        {
            poz=(long)j*sizeof(double);
            fseek(wewy,poz,SEEK_SET);
            fread(&wartosc,sizeof(double),1,wewy);
            printf("element z pod tej pozycji to %f\n",wartosc);
            printf("kolejny indeks lub poza przedzialem aby zakonczyc");
            scanf("%d",&j);
        }
        fclose(wewy);
        puts("'narazie");


    return 0;
}
