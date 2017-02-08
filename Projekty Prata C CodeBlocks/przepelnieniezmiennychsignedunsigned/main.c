/*przepelnienie signed unsigned*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i=2147483647;
    unsigned int j=4294967295;
    printf("ilosc bajtow zmiennej int jest rowna %d\n",sizeof(i));
    printf("%d %d %d\n",i,i+1,i+2);
    printf("%u %u %u\n",j,j+1,j+2);

   /* printf("%d %d1 %d\n",i,i+1,i+2);*/
    return 0;
}
