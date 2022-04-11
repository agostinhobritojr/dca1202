#include <stdio.h>
#include <time.h>
#include <limits.h>
#include <math.h>

int main(){
  clock_t t1, t2;
  int i;
  double x, y, z;

  x=4;
  y=4;

  t1 = clock();
  for(register int j=0; j<10000000; j++){
    z = pow(x,y);
  }
  t2 = clock()-t1;
  printf ("%d clicks (%f s).\n",
          t2,
          ((float)t2)/CLOCKS_PER_SEC);

  t1 = clock();
  for(i=0; i<10000000; i++){
    z = x*x*x*x;
  }
  t2 = clock()-t1;
  printf ("%d clicks (%f s).\n",
          t2,
          ((float)t2)/CLOCKS_PER_SEC);

  return 0;
}
