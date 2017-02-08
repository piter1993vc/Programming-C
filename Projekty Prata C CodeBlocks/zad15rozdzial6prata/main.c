#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k;
    for(k=1,printf("%d:czesc!\n",k);printf("k=%d\n",k),k*k<26;k+=2,printf("teraz k jest rowne %d\n",k))
        printf("k w petli wynosi %d\n",k);
    printf("Hello world!\n");
    return 0;
}
