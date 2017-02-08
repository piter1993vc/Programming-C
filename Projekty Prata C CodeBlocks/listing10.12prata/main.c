#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczby[2]={100,200};
    int wiecej[2]={300,400};
    int *w1,*w2,*w3;
    w1=w2=liczby;
    w3=wiecej;
    printf("*w1=%d *w2=%d *w3=%d\n",*w1,*w2,*w3);
    printf("*(w1++)=%d *(++w2)=%d (*w3)++=%d\n",*w1++,*++w2,(*w3)++);
    printf("*w1=%d *w2=%d *w3=%d\n",*w1,*w2,*w3);

    return 0;
}
