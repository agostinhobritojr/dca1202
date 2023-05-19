#include <iostream>

class A{
protected:
  int x;
public:
  A(){ std::cout << "construtor A\n";
  x = 3;}
  void print(){
    std::cout << "alo, A!\n";
  }
};

class B{
protected:
  int x;
public:
  B(){ std::cout << "construtor B\n";
  x = 4;}
  void print(){
    std::cout << "alo, B!\n";
  }
};

class C: public A, public B{
  protected:
    int x;
  public:
  C(){ std::cout << "construtor C\n";
  x = 5; A::x = 6;}
  void print(){
    std::cout << "alo, C! .. x = " << A::x << "\n";
  }
};

int main(void){
  C c;
  c.A::print(); 
  c.B::print(); 
  c.print(); 
}