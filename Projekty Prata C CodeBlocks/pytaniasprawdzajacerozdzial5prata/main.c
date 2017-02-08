#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*zadanie1*/
    int x;
    int y;


    x=(2+3)*6;
    printf("x=%d\n",x);
    x=(12+6)/2*3;
    printf("x=%d\n",x);
    y=x=(2+3)/4;
    printf("x=%d y=%d\n",x,y);
    y=3+2*(x=7/2);
    printf("x=%d y=%d\n",x,y);
    /*zadanie2*/
    x=(int)3.8+3.3;
    printf("x=%d\n",x);
    x=((2+3)*10.5)*10;
    printf("x=%d\n",x);
    x=3/5*22.0;
     printf("x=%d\n",x);
x=22.0*3/5;
 printf("x=%d\n",x);
double d;




 printf("Uwaga! Nadchodza ulamki!\n");

 /*while(i<30)
 {
     n=1/i;
     printf("n to %f\n",n);

 }
 printf("to by bylo na tyle.\n");

*/

    return 0;
}
