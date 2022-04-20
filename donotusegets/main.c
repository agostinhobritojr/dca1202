/* gets example */
#include <stdio.h>

int main()
{
  char string [6];
  printf ("Insert your full address: ");
  fgets(string, 6, stdin);
  printf ("Your address is: %s\n",string);
  return 0;
}
