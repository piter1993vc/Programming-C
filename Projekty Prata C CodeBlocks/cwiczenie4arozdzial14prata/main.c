#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
struct daneos
{
    char imie[30];
    char drugie_imie[30];
    char nazwisko[30];
};
struct struktura
{
    double pesel;
    struct daneos dane;
};

int main()
{
    struct struktura zmienna[3]=
    {
      {90072708737,{"Piotr","Joachim","Buchcic"}},
      {90404066537,{"Swinia","Knur","Birowski"}},
      {99357676737,{"Maciej","Wrona","Zygala"}}

    };
    printf("%s %s %s %.0lf\n",zmienna[0].dane.imie,zmienna[0].dane.drugie_imie,zmienna[0].dane.nazwisko,zmienna[0].pesel);
    printf("%s %s %s %.0f\n",zmienna[1].dane.imie,zmienna[1].dane.drugie_imie,zmienna[1].dane.nazwisko,zmienna[1].pesel);
    printf("%s %s %s %.0lf\n",zmienna[2].dane.imie,zmienna[2].dane.drugie_imie,zmienna[2].dane.nazwisko,zmienna[2].pesel);
 printf("The number of bits in a byte %d\n", CHAR_BIT);

   printf("The minimum value of SIGNED CHAR = %d\n", SCHAR_MIN);
   printf("The maximum value of SIGNED CHAR = %d\n", SCHAR_MAX);
   printf("The maximum value of UNSIGNED CHAR = %d\n", UCHAR_MAX);

   printf("The minimum value of SHORT INT = %d\n", SHRT_MIN);
   printf("The maximum value of SHORT INT = %d\n", SHRT_MAX);

   printf("The minimum value of INT = %d\n", INT_MIN);
   printf("The maximum value of INT = %d\n", INT_MAX);

   printf("The minimum value of CHAR = %d\n", CHAR_MIN);
   printf("The maximum value of CHAR = %d\n", CHAR_MAX);

   printf("The minimum value of LONG = %ld\n", LONG_MIN);
   printf("The maximum value of LONG = %ld\n", LONG_MAX);

    printf("Hello world!\n");
    return 0;
}
