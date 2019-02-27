#include <stdio.h>

int main()
{
  int x[10], i;
  int *px;
  for(i=0; i<10; i++){
    x[i] = i;
  }
  printf("x = %p\n", x);
  px = x;
  printf("x = %p\n", px);
  *(x+4) = 33;
  px++;
  for(i=0; i<10; i++){
    printf("%d, ", px[i]);
  }
  printf("\n");

  return 0;
}





