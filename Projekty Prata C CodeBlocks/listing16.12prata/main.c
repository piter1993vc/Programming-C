#include <stdio.h>
#include <stdlib.h>
void czemu_ja();
int main()
{
    #line 10 "gowno.c"
    printf("plik:%s\n",__FILE__);
    printf("data:%s\n",__DATE__);
    printf("czas:%s\n",__TIME__);
    printf("linia:%d\n",__LINE__);
    printf("wersja: %d\n",__STDC__);
    printf("nazwa funkcji:%s\n",__func__);


    czemu_ja();
    #if __STDC__!=1
        #error To nie c90
        #endif


    return 0;
}
void czemu_ja()
{
    printf("ale jaja\n");
    printf("Nazwa funkcji: %s\n",__func__);
    printf("Linia nr: %d\n",__LINE__);
}
