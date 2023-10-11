#include <iostream>
#include <iomanip>
int main(void){
  int x;
  double y;
  x = 1; y = 2;
  std::cout << std::fixed << std::setprecision(1);
  std::cout << x << std::endl;
  std::cout << y << std::endl;
}