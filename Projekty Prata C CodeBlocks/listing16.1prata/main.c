#include <stdio.h>
#include <stdlib.h>
#define DWA 2
#define CZTERY DWA*DWA
#define OW "konsekwencja jest ostatnim schronieniem ludzi pozba\
wionych fantazji.\n -Oscar Wilde"
#define PX printf("X wynosi %d\n",x)
#define FMT "X wynosi %d\n"
int main()
{
    int x=DWA;
    PX;
    x=CZTERY;
    printf(FMT,x);
    printf("%s\n",OW);
    printf("DWA: OW\n");

    return 0;
}
