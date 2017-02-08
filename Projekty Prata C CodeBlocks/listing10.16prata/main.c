#include <stdio.h>
#include <stdlib.h>

int main()
{
int zippo[4][2]={
                    {4,3},
                    {4,11},
                    {5,12},
                    {45,2}
};

int (*pz)[2];
pz=zippo;
printf("pz=%p pz+1=%p\n",pz,pz+1);
printf("pz[0]=%p pz[0]+1=%p\n",pz[0],pz[0]+1);
printf("*pz=%p *pz+1=%p\n",*pz,*pz+1);
getchar();
printf("*pz[0]=%d \n",*pz[0]);

printf("**pz=%d\n",**pz);
printf("pz[2][1]=%d\n",pz[2][1]);
printf("*(*(pz+3)+1)=%d\n",*(*(pz+3)+1));
    return 0;
}
