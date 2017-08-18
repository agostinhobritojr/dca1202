#include <stdio.h>
#include <time.h>
#include <math.h>
#include <values.h>

double pow2(double x){
  return x*x;
}

int main(void){
  clock_t t;
  double x, y;
  int i, j, k;
  x = 3;

  t = clock();
  for(i=0; i<MAXINT/8; i++){
    y = x*x;
  }
  t = clock() - t;
  printf ("ticks = %d, time = %f.\n",
          (int)t,((float)t)/CLOCKS_PER_SEC);

  t = clock();
  for(i=0; i<MAXINT/8; i++){
    y = pow2(x);
  }
  t = clock() - t;
  printf ("ticks = %d, time = %f.\n",
          (int)t,((float)t)/CLOCKS_PER_SEC);
  goto label;
  printf("alo, jose\n");
 label:
  printf("alo, maria\n");


}





