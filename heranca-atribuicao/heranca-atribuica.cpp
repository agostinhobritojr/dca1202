#include <iostream>

class Base{
  protected:
    int a, b;
  public:
    int getA(){ return a; };
    int getB(){ return b; };
};

class Derivada : public Base{
  int c;
public:
  void operator=(Base &x){
    a = x.getA(); b = x.getB();
    c = 0;
  }
};
int main(void){
  Base b;
  Derivada d;
  b = d;
  d = b; // operator=(Base &x)
}
