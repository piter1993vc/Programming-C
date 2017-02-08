#include <stdio.h>
#include <stdlib.h>
void sprawdz(void);
int main()
{
    int licznik;
    for(licznik=1;licznik<=3;licznik++)
    {
        printf("Iteracja nr: %d\n",licznik);
        sprawdz();
    }
    printf("Hello world!\n");
    return 0;
}
void sprawdz(void)
{
    int znikam=1;
    static int trwam=1;
    printf("znikam=%d,a trwam=%d\n",znikam++,trwam++);
}
