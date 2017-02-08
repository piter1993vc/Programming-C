#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf(" 16 stkowe: %x %X %#x %#X 8 kowe: %#o 10 sietne: %d\n",32,32,32,32,32,32);
    printf("%5d %5.4d %05d %05.4d\n",12,12,12,12);
    printf("%d % 12.3d % +12d\n",-12,-12,-12);
    return 0;
}
