#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    int i,razy;
    if(argc<2||(razy=atoi(argv[1]))<1)
        printf("sposob uzycia %s liczba -dodatnia\n",argv[0]);
    else
        for(i=0;i<razy;i++)
        puts("witaj przystojniaku");
    return 0;
    getchar(); getchar();
}
