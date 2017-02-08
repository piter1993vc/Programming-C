#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 25
void fill(double tab[],int n);
void print(const double tab[],int n);
int sort(const void*w1,const void*w2);
int main()
{
    double array[MAX];
    srand(time(NULL));
    fill(array,MAX);
    printf("random filling array:\n");
    print(array,MAX);
    qsort(array,MAX,sizeof(double),sort);
    printf("\n sorted array:\n");
    print(array,MAX);

    return 0;
}
void fill(double tab[],int n)
{
    int index;
    for(index=0; index<n; index++)
    {
        tab[index]=(double)(rand()%24+14.2*(rand()/125.2));
    }
    putchar('\n');
}

void print(const double tab[],int n)
{
    int index;
    for(index=0; index<n; index++)
    {
        printf("%.2lf ",tab[index]);
        if(index%5==0&&index!=0)
        {
            putchar('\n');
        }
    }
}
int sort(const void*w1,const void*w2)
{
const double *a1=w1;
const double *a2=w2;
if(*a1>*a2)
    return 1;
else if(*a1==*a2)
    return 0;
else
    return -1;

}
