#include <stdio.h>
#include <stdlib.h>
#define X 4
#define Y 2
int main()
{
    int zippo[X][Y]={
    {2,3},
    {4,5},
    {5,11},
    {1,32},
    };
    int[]
   printf("zippo=%p zippo+1=%p\n",zippo,zippo+1);
   printf("zippo[0]=%p zippo[0]+1=%p\n",zippo[0],zippo[0]+1);
   printf("*zippo=%p *zippo+1=%p\n",*zippo,*zippo+1);
   printf("zippo[2][1]=%d zippo[2][1]+1=%d\n",zippo[2][1],zippo[2][1]+1);
   printf("**zippo=%d  **zippo+3=%d\n",**zippo,**zippo+3);
   printf("*(*(zippo+2)+1=%d\n",*(*(zippo+2)+1));

    return 0;
}
