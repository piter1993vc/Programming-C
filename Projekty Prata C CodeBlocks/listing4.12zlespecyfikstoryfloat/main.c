#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1=3.0;
    double n2=3.0;
    long n3=200000000;
    long n4=123457890;


    printf("%.1e %.1e %.1e %.1e\n",n1,n2,n3,n4);
    printf("%ld %ld\n",n3,n4);
    printf("%ld %ld %ld %ld",n1,n2,n3,n4);    return 0;
}
