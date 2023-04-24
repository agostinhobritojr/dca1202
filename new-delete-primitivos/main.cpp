#include <iostream>

int main(){
  int *x;
  x = new int;
  *x = 3;
  std::cout << "*x = " << *x << std::endl;
  delete x;

  x = new int[5];
  x[4] = 4;
  std::cout << "x[4] = " << x[4] << std::endl;
  delete [] x;

  return 0;
}
