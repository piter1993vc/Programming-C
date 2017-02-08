#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define STOP '|'

int main()
{
    char znak;
    int licznik_a,licznik_b,licznik_c,licznik_d,licznik_e,licznik_f,licznik_g,licznik_h,licznik_i,licznik_j,licznik_k,licznik_l;

    licznik_a=licznik_b=licznik_c=licznik_d=licznik_e=licznik_f=licznik_g=licznik_h=licznik_i=licznik_j=licznik_k=licznik_l=0;

    printf("Podaj litere od a do l (mala lub duza), lub znak \"|\" aby zakonczyc: \n");
    while((znak=getchar())!='|')
    {
        if(znak=='\n')
            continue;
        if(isalpha(znak))
        {
            switch(znak)
            {
                case 'A':
                case 'a': licznik_a++; break;
                case 'B':
                case 'b': licznik_b++; break;
                case 'C':
                case 'c': licznik_c++; break;
                case 'D':
                case 'd': licznik_d++; break;
                case 'E':
                case 'e': licznik_e++; break;
                case 'F':
                case 'f': licznik_f++; break;
                case 'G':
                case 'g': licznik_g++; break;
                case 'H':
                case 'h': licznik_h++; break;
                case 'I':
                case 'i': licznik_i++; break;
                case 'J':
                case 'j': licznik_j++; break;
                case 'K':
                case 'k': licznik_k++; break;
                case 'L':
                case 'l': licznik_l++; break;
                default: printf("Nie ma jeszce tej litery dostepnej, prosze czekac, wkrotce dodam -) \n");
                break;


            }
        }
        else printf("Nie wpisales litery popraw sie!!!\n");

        printf("Podaj kolejna litere lub wpisz \"|\" aby zakonczyc: \n");
    }
    printf("Litera: A,a B,b C,c D,d E,e F,f G,g H,h I,i J,j K,k L,l \n");
    printf("Ilosc: %3d,%3d,%3d,%3d,%3d,%3d,%3d,%3d,%3d,%3d,%3d,%3d   <-razy\n",licznik_a,licznik_b,licznik_c,licznik_d,licznik_e,licznik_f,
           licznik_g,licznik_h,licznik_i,licznik_j,licznik_k,licznik_l);

    printf("Mozna sprawdzic co sie stanie jak sie poda cyfre,znak zakonczenia.\n");
    printf("Good Night and good Luck --)\n");
    getchar(); getchar();
    return 0;
}
