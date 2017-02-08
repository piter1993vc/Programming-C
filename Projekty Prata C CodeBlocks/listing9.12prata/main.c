#include <stdio.h>
#include <stdlib.h>
void gowno(int och);

int main()
{
    int och=2;
    int ach=5;
    printf("w funkcji main ach=%d a adres ach  %p\n",ach,&ach);
    printf("w funkcji main och=%d a adres och  %p\n",och,&och);
    gowno(och);
    return 0;
}
void gowno(int och)
{
    int ach=10;
      printf("w funkcji gowno ach=%d a adres ach  %p\n",ach,&ach);
    printf("w funkcji gowno och=%d a adres och  %p\n",och,&och);
}
