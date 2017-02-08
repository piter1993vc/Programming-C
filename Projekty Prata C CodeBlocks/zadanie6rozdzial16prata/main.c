#include <stdio.h>
#include <stdlib.h>
#define STALA 25
#define ODSTEP putchar(' ')
#define WO printf("%s","->")
#define DOD_3(X) ((X)+3)
#define SUMA_KW(X,Y) ((X)*(X)+(Y)*(Y))
int main()
{
    printf("stala =%d\n",STALA);
    ODSTEP;
    WO;
    printf(" DOD_3 liczby 5 to %d\n",DOD_3(5));
    printf("suma kw 4 i 5 to %d\n",SUMA_KW(4,5));
    return 0;
}
