#include <stdio.h>
#include <stdlib.h>
#define MIESIACE 12
int main()
{
    int dni[MIESIACE]={31,28,31,30,31,30,31,31,30,31,30,31};
    int index;
    for(index=0;index<MIESIACE;index++)
    printf("%d miesiac ma %d dni\n",index+1,dni[index]);
    return 0;
}
