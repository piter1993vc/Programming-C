#include <stdio.h>
#include <stdlib.h>

int main()
{
    int licznik=0;
  FILE *wp;
  int ch;
  if((wp=fopen("gowno.txt","w"))==NULL)
  {

      printf("nie udalo sie utworzyc pliku gowno.txt\n");
      exit(EXIT_FAILURE);
  }
  while((ch=getc(stdin))!=EOF)
  {

      putc(ch,stdout);
      licznik++;



  }
  printf("licznik zawiera %d snakow\n",licznik);
  fclose(wp);
  return(0);
}
