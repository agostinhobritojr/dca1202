#include <iostream>
#include "alo.h"

int main(void){
  Alo<int> a(1);
  Alo<float> b(3);
  std::cout << a.getX() << std::endl;
  std::cout << b.getX() << std::endl;  
}