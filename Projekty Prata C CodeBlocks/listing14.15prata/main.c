#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX 50
enum widmo{czerwony,pomaranczowy,zielony,zolty,niebieski,fioletowy};
char *kolory[]={"czerwony","pomaranczowy","zielony","zolty","niebieski","fioletowy"};


int main()
{
    enum widmo kolor;
    char wybor[MAX];
    bool znaleziony=false;
puts("podaj kolor lub [enter] aby zakonczyc");
while(gets(wybor)!=NULL&&wybor[0]!='\0')
{
    for(kolor=czerwony;kolor<=fioletowy;kolor++)
    {
        if(strcmp(wybor,kolory[kolor])==0)
        {
            znaleziony=true;
            break;
        }
    }

    if(znaleziony)
    {
        switch(kolor)
        {
      case czerwony:        puts("czerwone sa roze"); break;
      case pomaranczowy:    puts("pomaranczowe sa maki"); break;
      case zielony:         puts("zielona jest trawa"); break;
      case zolty:           puts("zloty jest slonecznik");  break;
      case niebieski:       puts("niebieskie sa dzwonki");  break;
      case fioletowy:       puts("fioletowe sa fiolki");  break;

        }
    }
    else
        printf("nie wiem nic o kolorze %s\n",wybor);
        znaleziony=false;
        puts("podaj kolejny kolor lub [enter] aby zakonczyc");

}
puts("\"Good night and good luck.\"-->> Dying Light");
    return 0;
}
