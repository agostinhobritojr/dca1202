#include <stdio.h>
#include <math.h>

#define quad(x) (x)*(x)

struct Ponto{
  float x;
  float y;
};

float distancia(struct Ponto p1,
                struct Ponto p2){
  float d;
  d = sqrtf(quad(p1.x - p2.x)+
           quad(p1.y - p2.y));
  return d;
}

int main(){
  float y;
  struct Ponto p1, p2;
  printf("Ponto p1 \n");
  printf("--> x: ");  scanf("%f", &p1.x);
  printf("--> y: ");  scanf("%f", &p1.y);

  printf("Ponto p2 \n");
  printf("--> x: ");  scanf("%f", &p2.x);
  printf("--> y: ");  scanf("%f", &p2.y);

  //  p1.x = 2; p1.y = 3;
//  p2.x = 10; p2.y = 15;

  y = distancia(p1, p2);
  printf("distancia = %f\n", y);
  return 0;
}
