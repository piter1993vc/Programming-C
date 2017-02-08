/* gcvt example */
#include <stdio.h>
#include <stdlib.h>

int main ()
{
  char buffer [20];
  gcvt (1365.249,3,buffer);
  puts (buffer);
  gcvt (1365.249,3,buffer);
  puts (buffer);
  return 0;
}
