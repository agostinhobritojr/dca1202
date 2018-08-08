#include <stdio.h>

int main()
{
  int y[5], i;
  int *py;
  int z;

  z = 5;
  py = &z;
  *py = *py+1;

  for(i=0; i<5; i++){
    y[i] = 2*i;
  }
  py = y;
  *(py+1) = 11;
  for(i=0; i<5; i++){
    printf("%d, ", *(py+i));
  }
  printf("\n");
  printf("*py = %d\n", *py);
  printf("py = %p\n", py);
  py = py + 3;
  printf("py = %p\n", py);
  printf("*py = %d\n", *py);
  return 0;
}



