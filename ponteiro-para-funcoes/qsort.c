/* qsort example */
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* qsort */

float values[] = { 40, 10.8, 10.1, 90, 10.2, 25 };

int compare (const void * a, const void * b){
  if ( *(float*)a <  *(float*)b ) return -1;
  if ( *(float*)a == *(float*)b ) return 0;
  if ( *(float*)a >  *(float*)b ) return 1;

}

int main (){
  int n;
  qsort (values, 6, sizeof(float), compare);
  for (n=0; n<6; n++){
    printf ("%f ",values[n]);
  }
  printf("\n");
  return 0;
}