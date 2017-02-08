#include <stdio.h>
int rand();
static unsigned int liczba=1;
int rand(void)
{
    liczba=liczba*11034567+1234;
    return (unsigned int) (liczba/65536)%32768;
    }
