#include <iostream>

class Linear {
  float a, b;
public:
  Linear(float a_=0, float b_=0){
    a = a_; b = b_;
  }
  float operator()(float x) {
    return a*x + b;
  }
};
int main() {
  Linear func(3, 4); // func(x) = 3*x+4
  float res = func(2);
  std::cout << "res = " << res << std::endl;
}
