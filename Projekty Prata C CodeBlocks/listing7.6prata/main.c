
/*zarabisty program liczy ilosc znakow w zdaniu <--mozna zmienic warunki if i bedzie zliczal apostrofy i cudzyslowia tez */
#include <stdio.h>
#include <stdlib.h>
#define END '.' /*warunek zakonczenia programu*/
int main()
{
    int ch; /*zmienna na znaki  getchar wpisuje do niej liczbe */
    int licznik=0; /*iterator do znakow*/
printf("wpisuj zdania z spacjami enterami cudzyslowiami, program zlicza do kropki: ");
    while((ch=getchar())!=END) /*zlicza dopuki nie wpiszemy gdzies znaku konczacego zdefiniowanego */
    {
        if(ch!='"' && ch!='\'') /*wyklucza cudzyslowia i apostrofy*/
            licznik++;
    }
    printf("w zdaniu jest %d znakow nie bedacymi cudzyslowiami i apostrofami \n",licznik); /*koniec programu*/
    return 0;
}
