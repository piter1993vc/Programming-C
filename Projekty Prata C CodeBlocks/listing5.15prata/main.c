#include <stdio.h>
#include <stdlib.h>
/*definiowanie funkcji z argumentem*/
void hash(int n);


int main()
{
    int razy=5;
    char ch='!';
    float f=6.0;
    hash(razy);
    hash(ch);
    hash((int) f);
    return 0;
}
void hash(int n)
{

    while(n-->0)
        printf("#");
    printf("\n");
}
