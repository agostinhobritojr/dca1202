#include <stdio.h>
#include <stdlib.h> // para malloc()/free()
#include <string.h> // para memcpy()

int main()
{
  int *x, *z;
  int y[10];
  int n, i;
  printf("digite n: ");
  scanf("%d", &n);

  x = (int*) malloc(n*sizeof(int));
  z = (int*) malloc(n*sizeof(int));

  x[0] = 1; x[2] = 4; x[3] = -8;

  for(i=0; i<n; i++){
    printf("%d, ", x[i]);
  }
  printf("\n");
 /* for(i=0; i<n; i++){
 *   z[i] = x[i];
  }
*/
  memcpy(z,x,n*sizeof (int));

  for(i=0; i<n; i++){
    printf("%d, ", z[i]);
  }
  printf("\n");

  z[2] = 5;
  for(i=0; i<n; i++){
    printf("%d, ", z[i]);
  }
  printf("\n");

  for(i=0; i<n; i++){
    printf("%d, ", x[i]);
  }
  printf("\n");
  // criar um array para ser gerido pela
  // variavel z, contendo os mesmos valores
  // do array x;


  // mostrar o endereco guardado em y
  // mostrar o endereco guardado em x
  printf("y = %p\n", y);
  printf("x = %p\n", x);

  free(x);
  free(z);
  return 0;
}
