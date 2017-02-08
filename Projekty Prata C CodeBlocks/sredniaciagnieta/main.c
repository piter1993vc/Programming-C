#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char cz_dz[5];
char cz_u[3];
int main()
{

    int napiecie;
    int srednia=0;
    int dt=10;
    int pomiar =200;
    printf("start\n");
    while(1)
    {
        srednia=srednia*dt;
        srednia=srednia+pomiar;
        srednia=srednia/(dt+1);
        napiecie=(srednia*250/540);
        div_t divmod=div(napiecie,100);
        itoa(divmod.quot,cz_dz,10);
        itoa(divmod.rem,cz_u,10);
        if(divmod.rem<10)
        {
            cz_u[0]='0';
            cz_u[1]=divmod.rem+'0';


        }


        printf("srednia=%d,napiecie =%s,%s V\n",srednia,cz_dz,cz_u);
        _sleep(300);
        if(srednia>1000)
        {
            break;
        }








    }
     printf("koniec\n");
    return 0;
}
