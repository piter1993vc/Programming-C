#include <stdio.h>
#include <stdlib.h>
#define SEK_W_MIN 60
#define FORMAT "%s jest lancuchem\n"
#define DZIESIEC 10
#define G 103
#define TEKST "KOMPUTER GRYZIE PSA"

int main()
{
    /*zadanie1*/
    int x;
    int y;
    int i=1;
    float n;
     int sek,min,reszta;
     int num=0;
     char c1,c2;
     int roznica;
     float num2;
     int n2=0;
     char litera='a';
     int n3=0;


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





 printf("Uwaga! Nadchodza ulamki!\n");

 while(i<30)
 {
     n=1.0/i;
     printf("n to %f\n",n);
     i++;

 }
 printf("to by bylo na tyle.\n");
 /*zadanie4*/
 printf("Ten program przelicza sekundy na minuty i sekundy\n");
 skok:
    printf("podaj liczbe sekun,wpisz 0 aby zakonczyc program\n");
    scanf("%d",&sek);
    while(sek>0)
    {
        min=sek/SEK_W_MIN;
        reszta=sek%SEK_W_MIN;
        printf("%d sekund to %d minut i %d sekund\n",sek,min,reszta);
        if(sek!=0) goto skok;
    }
    printf("Do widzenia\n");
    /*program 5*/
    printf(FORMAT,FORMAT);
    printf("%d\n",++num);
    printf("%d\n",num++);
    printf("%d\n",num--);
    printf("%d\n",num);
    /*program 6*/
   c1='D';
   c2='A';
   roznica=c1-c2;
   num2=roznica;
   printf("%c%c%c:%d %3.2f\n",c1,c2,c1,roznica,num2);
   while(n2++<DZIESIEC)
   {
       printf("%5d",n2);
   printf("\n");
   }
   /*zadanie8*/
   while(litera<=G)
   {
       printf("%5c",litera);
   printf("\n");
   litera++;
   }
   /*zadanie 108*/
   while(n<5)
   {
         printf("%s\n",TEKST);
   n++;
   }

   printf("To wszystko.\n");




















    return 0;
}
