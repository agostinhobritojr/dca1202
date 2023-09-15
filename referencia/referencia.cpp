#include <iostream>

void f(int &y){
  std::cout << "f   : &y = " << &y << std::endl;
  y = y+1;
}

int main(void){
  int x;
  x = 3;
  f(x);
  std::cout << "main: x  = " << x << std::endl;
  std::cout << "main: &x = " << &x << std::endl;
}