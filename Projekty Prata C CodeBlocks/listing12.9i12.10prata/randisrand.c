#include <stdio.h>
int rand1();
void srand1(int ziarno);
static unsigned int liczba=1;
int rand1(void)
{
    liczba=liczba*11034567+1234;
    return (unsigned int) (liczba/65536)%32768;
    }
    void srand1(int ziarno)
    {
        liczba=ziarno;
    }

