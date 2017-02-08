#include <stdio.h>
#include <stdlib.h>
        /*Ewa vs Kasia kto ugra wiecej hajsu??*/
int main()
{
    float hajs_Ewy=100.00; /*kapital poczatkowy Ewy*/
    float hajs_Kasi=100.00; /*kapital poczatkowy Kasi*/
    int opr_Ewy=10; /*procent prosty w skali roku*/
    int opr_Kasi=5; /*procent skladany w skali roku*/
    int wzgl_Ewy=0.1; /*procent wzgledny Ewy*/
    int wzgl_Kasi=0.05; /*procent wzgledny Kasi*/
    int lata=0; /*naliczanie lat lokat*/
    while(hajs_Ewy>=hajs_Kasi) /*petla zliczajaca hajsy w danym roku */
    {
        hajs_Ewy+=100.00*0.1;
        hajs_Kasi*=1.05;
        lata++; /*zliczacz lat*/
        printf("po %d roku Ewa ma %f zl a Kasia %f zl\n",lata,hajs_Ewy,hajs_Kasi);
    }
       hajs_Ewy+=100.00*0.1; /*wynik po przekroczeniu warunku*/
        hajs_Kasi*=1.05; /*wynik po przekroczeniu warunku*/
      lata++; /*zliczcz lat po warunku aby zliczylo ile przebilo*/
    printf("po %d roku Ewa ma  %f zl czyli mniej ni¿ Kasia %f zl\n",lata,hajs_Ewy,hajs_Kasi);
    return 0;

}
