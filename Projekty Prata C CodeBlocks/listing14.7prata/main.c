#include <stdio.h>
#include <stdlib.h>
#define MAX 50
struct fundusze {
char bank[MAX];
double bankfund;
char oszcz[MAX];
double oszczfund;
};
double suma(struct fundusze mamona);
int main()
{
    struct fundusze edek={
    "bank nasienia",12.50,"kasa bydleca",13.33};
    printf("edek ma aktualnie %.2lf zl mamony",suma(edek));
    return 0;
}
double suma(struct fundusze mamona)
{
    return(mamona.bankfund+mamona.oszczfund);
}
