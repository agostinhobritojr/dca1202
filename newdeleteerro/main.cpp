#include <iostream>

int main(){
  int *x;

  x = new int;
  *x = 3;
  std::cout << *x << std::endl;
  delete [] x;

  x = new int[10];
  x[2] = 3;
  std::cout << x[2] << std::endl;
  delete x;

  return 0;
}
