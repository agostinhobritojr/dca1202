#include <stdio.h>

int main(){
int x=6, *px = &x;
printf("x = %d\n", x);
*px = 3; // x recebe o valor 3
printf("x = %d\n", *px);
*px = *px + 1; // px recebe o valor 4
printf("x = %d\n", *px);
(*px)--; // x retorna ao valor 3
printf("x = %d\n", *px);
return 0;
}
