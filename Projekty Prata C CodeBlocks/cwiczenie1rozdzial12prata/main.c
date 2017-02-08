#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jednostki;
    printf("ile funtow masla jest w barylce\?\n");
    while(scanf("%d",&jednostki)==1&&jednostki!=56)
        printf("nie masz szczescia,sproboj ponownie\n");
    printf("musiales podejrzec\n");
    return 0;
}
