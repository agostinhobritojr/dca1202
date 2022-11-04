#include <iostream>
#include "alo.h"

int main(){
  Alo<int> a(10);
  Alo<float> b(10);
  std::cout << "ret = " << a.getX() << std::endl;
  return 0;
}
