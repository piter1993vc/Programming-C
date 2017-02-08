#include <stdio.h>
#include <stdlib.h>
#define MAX 50
#define N 2
struct fundusze{
char bank[MAX];
double bankfund;
char oszcz[MAX];
double oszczfund;
};

double suma(const struct fundusze *pieniadze,int n);
int main()
{
    struct fundusze hajsy[N]={
        {"Bank spoldzielczy w \"Mielcu\"",22.50,"Kasa oszczednosciowa\"Dziki kon\"",42.20},
        {"Bank \"jednego dnia\"",43.20,"Kasa \"Mila\"",32.20}
    };
    printf("hajsownicy maja aktualnie %.2f zl hajsu\n",suma(&hajsy[0],N));
    return 0;
}
double suma(const struct fundusze *pieniadze,int n)
{
    double kwota;
    int i;
    for(i=0,kwota=0;i<n;i++,pieniadze++)
    {
        kwota+=pieniadze->bankfund+pieniadze->oszczfund;
    }
    return(kwota);
}
