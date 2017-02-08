#include <stdio.h>
#include <stdlib.h>
#define CZYSC  while(getchar()!='\n')continue

float func1(int);
float func2(int);
float func3(int);
float func4(int);
int main()
{
    char c;
    int wybor;
    float k;
    float (*func[4])(int)={func1,func2,func3,func4};
    printf("Hello world!\n");
    printf("podaj swoj wybor od a,b,c,d\n");
    wybor=scanf("%c",&c);
    CZYSC;
    while(wybor==1&&(c!='z'))
    {
    switch(c)
    {
    case 'a': k=(func[0])(5); break;
    case 'b': k=(func[1])(5); break;
    case 'c': k=(func[2])(5); break;
    case 'd': k=(func[3])(5); break;
    default: puts("przejebane gowno, popraw sie!"); break;

    }
    printf("k=%f\n",k);
    printf("podaj swoj wybor od a,b,c,d\n");
    wybor=scanf("%c",&c);
    CZYSC;
    }

    return 0;
}

float func1(int x)
{
    return 1.0*x;
}

float func2(int y)
{
     return 2.0*y;
}

float func3(int z)
{
     return 3.0*z;
}

float func4(int a)
{
     return 4.0*a;
}
