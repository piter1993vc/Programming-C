#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void zamiana(int u,int v);

int main()
{
    int x=5;
    int y=14;
    printf("teraz x=%d a y=%d\n",x,y);
    zamiana(x,y);
    printf("teraz x=%d a y=%d\n",x,y);
    printf("sizeof z bool to %d\n",sizeof(bool));
    return 0;
}
void zamiana(int u,int v)
{
    int bufor;
     printf("teraz u=%d a v=%d\n",u,v);
     bufor=u;
     u=v;
     v=bufor;
      printf("teraz u=%d a v=%d\n",u,v);

}
