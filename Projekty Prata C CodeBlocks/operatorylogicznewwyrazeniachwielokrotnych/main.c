#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("podaj liczbe od 1 do 15\n");
    scanf("%d",&x);

     if(x<4&&x>1||x>13)
        printf("masz farta\n");
     else printf("masz pecha\n");
    return 0;
}
