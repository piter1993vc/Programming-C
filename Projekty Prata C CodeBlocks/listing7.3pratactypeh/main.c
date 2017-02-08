#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> /*biblioteka dla isalpha*/

int main()
{
    char ch; /*definicja zmiennej znakowej*/

    printf("podaj wyraz: ");
while((ch=getchar())!='\n') /*warunek z przypisaniem 1 .przypisanie 2.warunek if good' -->', else '\n'*/
{
    if(isalpha(ch)) /*warunek na litere*/
        putchar(ch+1);
        else /*znak bialy*/
        putchar(ch);
}
    putchar(ch);/*skocz do nowego wiersza*/


    return 0;
}
