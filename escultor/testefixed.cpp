#include <iostream>
#include <iomanip>

int main(void){
  float x;
  std::cout << std::fixed;
  std::cout << std::setprecision(2);
  std::cout << std::hex;
  std::cout << 1234221 << std::endl;
  x = 3.14159;
  std::cout << "x=" << x << std::endl;
}