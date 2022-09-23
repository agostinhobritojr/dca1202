#include <iostream>

class Vetor2d{
private:
  float x, y;
  int a;
public:
  void setX(float x_){
    if(x_ > 0)
    {
      x = x_;
    }
  }
  float getX(){
    return x;
  }
};

int main(void){
  Vetor2d v;
  //  v.a = 4;
  //  std::cout << "a=" << v.a << std::endl;
  v.setX(3); std::cout << v.getX();
  v.setX(-30); std::cout << v.getX();
  std::cout << std::endl;
}
