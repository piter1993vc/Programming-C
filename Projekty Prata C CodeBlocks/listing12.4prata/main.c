#include <stdio.h>
#include <stdlib.h>
int jednostki=0;
void krytyka(void);
int main()
{
    extern int jednostki;
    printf("ile funtów masla miesci sie w barylce?\n");
    scanf("%d",&jednostki);
    while(jednostki!=56)
    {
        krytyka();
    }
    printf("musiales podejzec!\n");
    return 0;
}
void krytyka(void)
{
    printf("nie masz szczescia popraw sie\n");
    scanf("%d",&jednostki);
}
