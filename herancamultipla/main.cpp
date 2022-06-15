#include <iostream>

class A{
  int x;
public:
  A(){ std::cout << "construtor A\n";}
  void setX(int x){
    this->x = x;
  }
  int getX(){
    return x;
  }
  void print(){
    std::cout << "print A\n";
  }
};

class B{
  int y;
public:
  B(){ std::cout << "construtor B\n";}
  void setY(int y){
    this->y = y;
  }
  int getY(){
    return y;
  }
  void print(){
    std::cout << "print B\n";
  }
};

class C : public A, public B{
  int z;
public:
  C(){ std::cout << "construtor C\n";}
  void setZ(int z){
    this->z = z;
  }
  int getZ(){
    return z;
  }
};

int main(){
  C c;
  c.setX(3);
  c.setY(4);
  c.setZ(5);
  std::cout << c.getX() << std::endl;
  c.A::print();
  return 0;
}

