#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void negacja(char *lan);
char *koniunkcja(char *wynik,char *lan_1,char *lan_2,int max,int max_1,int max_2);
char *alternatywa(char *wynik,char *lan_1,char *lan_2,int max,int max_1,int max_2);
char *suma_wyl(char *wynik,char *lan_1,char *lan_2,int max,int max_1,int max_2);
int main(int argc,char **argv)
{
    int max_1,max_2,max;

    if(argc<3)
    {
        printf("podano za malo liczbe argumentow!");
        exit(1);
    }
    max_1=strlen(argv[1]);
    max_2=strlen(argv[2]);
    max=max_1;
    if(max_2>max)
    {
        max=max_2;
    }
    char wynik[max+1];
    printf("niegacja: %s:\n",argv[1]);
    negacja(argv[1]);
    printf("niegacja: %s:\n",argv[2]);
    negacja(argv[2]);
    printf("koniunkcja %s & %s:\n",argv[1],argv[2]);
    printf("%s\n",koniunkcja(wynik,argv[1],argv[2],max,max_1,max_2));
    printf("alternatywa %s | %s:\n",argv[1],argv[2]);
    printf("%s\n",alternatywa(wynik,argv[1],argv[2],max,max_1,max_2));
    printf("suma wylaczajaca %s ^ %s:\n",argv[1],argv[2]);
    printf("%s\n",suma_wyl(wynik,argv[1],argv[2],max,max_1,max_2));
    printf("\n koniec!\n");
    getchar();
    getchar();
    return 0;
}
void negacja(char *lan)
{
    int i;
    int max=strlen(lan);

    for(i=0; i<max; i++)
    {
        if(lan[i]=='1')
        {
            putchar('0');
        }
        else if(lan[i]=='0')
        {
            putchar('1');
        }
    }
    putchar('\n');

}
char *koniunkcja(char *wynik,char *lan_1,char *lan_2,int max,int max_1,int max_2)
{
    int i,j,k;
    for(i=max_1-1, j=max_2-1,k=max-1;(i>=0)&&(j>=0); i--,j--)
    {
        if((lan_1[i]=='1')&&(lan_2[j]=='1'))
        {
            wynik[k]='1';
        }
        else
        {
            wynik[k]='0';
        }
        k--;
    }
    for(i=k;i>=0;i--)
    {
      wynik[i]='0';
    }
    wynik[max]='\0';

return wynik;
}
char *alternatywa(char *wynik,char *lan_1,char *lan_2,int max,int max_1,int max_2)
{
      int i,j,k;
    for(i=max_1-1, j=max_2-1,k=max-1;(i>=0)&&(j>=0); i--,j--)
    {
        if((lan_1[i]=='1')||(lan_2[j]=='1'))
        {
            wynik[k]='1';
        }
        else
        {
            wynik[k]='0';
        }
        k--;
    }
    for(i=k;i>=0;i--)
    {
        if(i>0)
        {
            wynik[i]=lan_1[i];
        }
        else if(j>0)
        {
         wynik[i]=lan_2[i];
        }
    }
    wynik[max]='\0';
    return wynik;
}
char *suma_wyl(char *wynik,char *lan_1,char *lan_2,int max,int max_1,int max_2)
{
        int i,j,k;
    for(i=max_1-1, j=max_2-1,k=max-1;(i>=0)&&(j>=0); i--,j--)
    {
        if((lan_1[i]=='1')&&(lan_2[j]=='1'))
        {
            wynik[k]='0';
        }
        else if((lan_1[i]=='1')&&(lan_2[j]=='0'))
        {
            wynik[k]='1';
        }
         else if((lan_1[i]=='1')&&(lan_2[j]=='1'))
        {
            wynik[k]='1';
        }
        else
        {
            wynik[k]='0';
        }
        k--;
    }
    for(i=k;i>=0;i--)
    {
        if(i>0)
        {
            wynik[i]=lan_1[i];
        }
        else if(j>0)
        {
         wynik[i]=lan_2[i];
        }
    }
    wynik[max]='\0';
    return wynik;
}
