#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
int znak;
int slowa=0;
int litery=0;
bool w_slowie=false;

    printf("wpisz zdania lub eof aby zakonczyc\n");
    while((znak=getchar())!=EOF)
    {
        if(isalpha(znak))
            litery++;
            if((isalpha(znak))&&w_slowie==false)
            {
               w_slowie=true;
               slowa++;
            }
                w_slowie=true;
            if((!isalpha(znak))&&w_slowie==true)
                w_slowie=false;


    }
    printf("liczba liter %d , liczba slow %d ,srednia liczba liter w slowie to: %.2f\n",litery,slowa,(float)litery/slowa);

    return 0;
}
