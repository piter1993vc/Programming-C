#include <stdio.h>
#include <stdlib.h>

int main()
{
    int urna[5]={100,200,300,400,500};
    int *wsk1,*wsk2,*wsk3;
    wsk1=urna;
    wsk2=&urna[2];
    printf("wsk1=%p, *wsk1=%d &wsk1=%p\n",wsk1,*wsk1,&wsk1);
    printf("wsk2=%p, *wsk2=%d &wsk2=%p\n",wsk2,*wsk2,&wsk2);
    wsk3=wsk1+4;
      printf("wsk3=%p, *wsk3=%d &wsk3=%p\n",wsk3,*wsk3,&wsk3);
    printf("dodanie int do wskaznika\n");
    printf("wsk1+4=%p wsk1+3= %p\n",wsk1+4,wsk1+3);
    wsk1++;
    printf("wsk1++=%p *wsk1++=%d &wsk1++=%p\n",wsk1,*wsk1,&wsk1);
    wsk2--;
    printf("--wsk2=%p *--w2=%d  &--w2=%p\n",wsk2,*wsk2,&wsk2);
    wsk1--; ++wsk2;
    printf("przywrocenie wskaznikow do stanu poczatkowego\n");
    printf("wsk1=%p wsk2=%p\n",wsk1,wsk2);
    printf("odejmowanie wskaznikow\n");
    printf("w2=%p w1=%p w2-w1=%d \n",wsk2,wsk1,wsk2-wsk1);
    printf("odejmowanie typu int od wskaznika\n");
    printf("wsk3=%p wsk3-2=%p\n",wsk3,wsk3-2);

    return 0;
}
