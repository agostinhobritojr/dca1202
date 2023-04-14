#include <iostream>
#include <cstdio>
#include "funcao.h"
int main(){
  int x;
  std::cout << "Hello World!" << "\n Alo1\n";
  std::cin >> x;
//  std::scanf("%d", &x);
  std::cout << "x = " << maisum(x) << "\n";
  return 0;
}
