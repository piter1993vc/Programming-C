#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *gowno="miekkie";
    char *klocek;
    klocek=gowno;
    printf("%s\n",gowno);
    printf("gowno=%s,adres gowno=%p,wartosc wskaznika=%p\n",gowno,&gowno,gowno);
        printf("klocek=%s,adres klocek=%p,wartosc wskaznika=%p\n",klocek,&klocek,klocek);
    printf("Hello world!\n");
    return 0;
}
