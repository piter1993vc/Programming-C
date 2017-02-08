#include <stdio.h>


int pobierz_wybor(void);
int pobierz_znak(void);
void dodawanie(void);
void odejmowanie(void);
void mnozenie(void);
void dzielenie(void);
float pobierz_pierwsza(void);
float pobierz_druga(void);


int main()
{

    int wybor;

    printf("Wybierz jedno z dzialan:\n");
    while((wybor=pobierz_wybor())!='k')
    {
        switch(wybor)
        {
            case 'a': dodawanie(); break;
            case 'b': odejmowanie(); break;
            case 'c': mnozenie(); break;
            case 'd': dzielenie(); break;

        }

    printf("Wybierz jedno z dzialan:\n");

    }
    printf("Koniec\n");
    return 0;
}
int pobierz_wybor(void)
{
    int ch;
    printf("a) dodawanie                   b) odejmowanie\n");
    printf("c) mnozenie                    d) dzielenie\n");
    printf("k) koniec                                            \n");
    ch=pobierz_pierwszy();
    while((ch>'d'||ch<'a')&&ch!='k')
    {
        printf("podales zly wybor popraw sie prosze\n");
        ch=pobierz_pierwszy();
    }
    return ch;

}
int pobierz_pierwszy(void)
{
    int ch;
    ch=getchar();
    while(getchar()!='\n')
        continue;
    return ch;

}
void dodawanie(void)
{
    float a;
    float b;
    float c;
    a=pobierz_pierwsza();
    b=pobierz_druga();
    c=a+b;
    printf("%.2f+%.2f=%.2f\n",a,b,c);

}
void odejmowanie(void)
{
    float a;
    float b;
    float c;
    a=pobierz_pierwsza();
    b=pobierz_druga();
    c=a-b;
   printf("%.2f-%.2f=%.2f\n",a,b,c);

}
void mnozenie(void)
{
    float a;
    float b;
    float c;
    a=pobierz_pierwsza();
    b=pobierz_druga();
    c=a*b;
   printf("%.2f*%.2f=%.2f\n",a,b,c);

}
void dzielenie(void)
{
    float a;
    float b;
    float c;
    a=pobierz_pierwsza();
    b=pobierz_druga();
    while(b==0.0)
    {
        printf("podzielnik nie moze byc zerem popraw sie:\n");
          b=pobierz_druga();
    }

    c=a/b;
   printf("%.2f/%.2f=%.2f\n",a,b,c);

}
float pobierz_pierwsza(void)
{
    float pierwsza;
    char ch;


    printf("Podaj pierwsza liczbe:\n");

    while ((scanf("%f",&pierwsza))!=1)
    {
        while(ch=getchar()!='\n')
            putchar(ch);

              printf(" nie jest liczba\n");
              printf("Podaj liczbe np. 2.5 -178E8 czy 3\n");
    }

    return pierwsza;
}

float pobierz_druga(void)
{
    float druga;
    char ch;
    printf("Podaj druga liczbe:\n");
    while((scanf("%f",&druga))!=1)
    {
        while(ch=getchar()!='\n')
            putchar(ch);
            printf(" nie jest liczba\n");
            printf("Podaj liczbe np. 2.5 -178E8 czy 3\n");

    }
    return druga;
}


