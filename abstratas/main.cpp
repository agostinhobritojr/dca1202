#include <iostream>

using namespace std;

class A{
public:
  virtual void print(){
    cout << "classe A\n";
  }
};

class B : public A{
public:
  void printB(){
    cout << "print B\n";
  }
  void print(){
    cout << "print do B\n";
  }
};

class C : public A{
public:
  void printC(){
    cout << "print C\n";
  }
  void print(){
    cout << "print do C\n";
  }
};

int main(){
  A a, *pa;
  B b, *pb;
  C c;
  // um ponteiro da superclasse
  // possa apontar para um objeto da
  // subclasse
  pa = &b;
  pa->print();

  pa = &c;
  pa->print();

  return 0;
}
