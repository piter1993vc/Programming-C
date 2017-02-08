#include <stdio.h>
#include <stdlib.h>
void funkcja(void);

int main()
{
    int i;
    for(i=0;i<12;i++)
    {
        funkcja();
    }

    return 0;
}
void funkcja(void)
{
    static int ile;
    printf("wywolanie %d\n",++ile);
}
