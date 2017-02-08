#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    long int znaki=0;
    int spacje=0;
    int linie=0;

    printf("Program wyliczy ilosc znakow ,spacji, enterow.\n"
             "Wpisz co chcesz lub wcisnij # aby zakonczyc:\n");
    while((ch=getchar())!='#')
    {
            if(ch=='\n')
            {
                linie++;
                continue;
            }
        if(ch==' ')
            spacje++;
        else
            znaki++;
    }
    printf("liczba znakow=%ld liczba spacji=%d, liczba linii=%d\n",znaki,spacje,linie);
    printf("Good night good luck -).");
    getchar(); getchar();
}
