#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dni[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int i;
    for(i=0;i<sizeof(dni)/sizeof(int);i++)
        printf("%d miesiac ma %d dni\n",i+1,dni[i]);
    return 0;
}
