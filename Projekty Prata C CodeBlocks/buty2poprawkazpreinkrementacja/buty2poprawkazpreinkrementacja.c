#include <stdio.h>
#define MNOZNIK 0.66666
#define KOREKTA -1

int main()

{
    int but=23;
    printf("but=%d,stopa=%fcm\n",but,(but*MNOZNIK+KOREKTA));
    while(++but<45)
    printf("but=%d,stopa=%fcm\n",but,(but*MNOZNIK+KOREKTA));
    
    
    return 0;
}