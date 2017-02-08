#include <stdio.h>
/*suma 20 pierwszych liczb z uwzglednieniem zera*/
int main()
{
    int suma,licznik;
    suma=0,licznik=0;
    while(licznik<20)
    {
       suma=suma+licznik;
         printf("suma=%d\n",suma);
        licznik++;
    }
    
    
    
    return 0;
}