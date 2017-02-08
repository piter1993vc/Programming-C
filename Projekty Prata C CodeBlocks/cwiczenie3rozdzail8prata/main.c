#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m_licz=0;
    int d_licz=0;
    int ch;
    int x;
    while((ch=getchar())!=EOF)
    {
        if(isalpha(ch))
        {
            x=(int)ch;
               if(x>=65&&x<=90)
            d_licz++;
else
        m_licz++;
        }

    }
    printf("ilosc duzych liter to %d a malych %d",d_licz,m_licz);
    return 0;
}
