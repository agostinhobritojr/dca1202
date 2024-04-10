#include "funcao.h"
#include <iostream>

int main(){
  int x;
  std::cout << "digite x: ";
  std::cin >> x;
  std::cout << "f(" << x << ") = " << f(x) << std::endl;  
}