#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *we,*wy;
   int ch;
   int licznik=0;

  if((we=fopen("gowno.txt","r"))==NULL)
  {

      fprintf(stderr,"nie udalo sie otworzyc pliku gowno.txt\n");
      exit(EXIT_FAILURE);
  }
   if((wy=fopen("ajc.txt","w"))==NULL)
  {

      printf("nie udalo sie utworzyc pliku ajc.txt\n");
      exit(EXIT_FAILURE);
  }
  while((ch=getc(we))!=EOF)
  {

      if(licznik++%3==0)
        putc(ch,wy);
  }
  fclose(we);
  fclose(wy);


    return 0;
}
