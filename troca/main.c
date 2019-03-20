#include <stdio.h>

int main()
{
  int a, b, c, troca;
  printf("Digite a: ");
  scanf("%d", &a);
  printf("Digite b: ");
  scanf("%d", &b);
  printf("Digite c: ");
  scanf("%d", &c);
  printf("a=%d, b=%d\n", a, b);
//  c=a; a=b; b=c;
  troca=b; b=a; a=troca;
  printf("a=%d, b=%d\n", a, b);

  return 0;
}
