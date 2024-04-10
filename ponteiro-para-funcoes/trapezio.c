#include <math.h>
#include <stdio.h>

float trapezio(float (*f)(float), float a, float b, int n) {
  float x, h, area;
  int i;
  h = (b - a) / n;
  area = 0;
  x = a + h;
  for (i = 1; i < n; i++) {
    area = area + f(x);
    x = x + h;
  }
  area = area + (f(a) + f(b)) / 2;
  area = area * h;
  return area;
}

float func(float x) { return exp(x); }

int main(void) {
  float area;
  area = trapezio(func, 0, 1.0, 100);
  printf("area = %f\n", area);
}
