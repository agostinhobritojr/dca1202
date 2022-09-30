#include <iostream>

void alo(int &x){
  std::cout << "endx = " << &x << std::endl;
  x = 4;
}

int main(){
  int a = 3;
  std::cout << "a=" << a << std::endl;
  std::cout << "enda = " << &a << std::endl;
  alo(a);
  std::cout << "a=" << a << std::endl;
  return 0;
}
