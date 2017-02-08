#include <stdio.h>
#include <stdlib.h>
#define MIESIACE 12
int main()
{
    int dni[MIESIACE]={21,21};
    int index=0;
    while(index<MIESIACE)
    {

        printf("%d miesiac ma %d dni\n ",index+1,dni[index]);
        index++;
    }
    printf("Hello world!\n");
    return 0;
}
