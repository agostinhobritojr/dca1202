#include <iostream>
#include <cmath> // sqrt

class Vetor2d{
private:
  float y;
  float x;
public:
  void setX(float x_){
    x = x_;
  }
  float getX(){
    return x;
  }
  void setY(float y_){
    y = y_;
  }
  float getY(){
    return y;
  }
  void print(void){
    std::cout << "(" << x << "," << y << ")";
  }
  float norma(void){
    return std::sqrt(x*x + y*y);
  }
};

int main(void){
  Vetor2d v;
//  v.x = 4;
  v.setX(3); v.setY(4);
  v.print();
  std::cout << "\n";
  std::cout << v.norma() << "\n";

//  std::cout << v.getX();
}




