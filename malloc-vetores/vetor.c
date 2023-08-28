#include <stdio.h>
#include <stdlib.h> // para malloc

void funcao(void){
  int *a;
  a = (int*) malloc (40);
}

int main() {
  int i, n=10;
  int *p;
  printf("i : %p\n", &i);
  printf("n : %p\n", &n);
  printf("&p: %p\n\n", &p);
  p = (int *) malloc(n * sizeof(int));
  printf("%p: %p\n", &p, p);
  printf("tam = %d\n", sizeof(p));
  for(i=0; i<10; i++){
    p[i] = i+1;
  }
  for(i=0; i<10; i++){
    printf("%d, ",p[i]);
  }
  printf("\n");
  free(p);
  p = NULL;
  free(p);
//  funcao();
  return 0;
}
