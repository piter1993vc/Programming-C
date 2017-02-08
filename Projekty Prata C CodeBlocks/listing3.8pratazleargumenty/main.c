/*zle dobrane argumenty*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int g=2;
    int c=4;
    float x=2.0f;
    printf("%d\n",g,c); /*za duzo argumentów*/
    printf("%d %d\n",g);/*za malo argumentow*/
    printf("%f %d\n",g,x);/*zle dobrane argumenty*/
    return 0;
}
