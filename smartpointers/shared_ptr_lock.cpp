#include <iostream>
#include <memory>

using namespace std;
class B;

class A {
 public:
  shared_ptr<B> ptr;  // use weak_ptr instead to avoid CD
  A() { cout << "A()" << endl; }
  ~A() { cout << "~A()" << endl; }
};

class B {
 public:
  shared_ptr<A> ptr;
  B() { std::cout << "B()" << endl; }
  ~B() { std::cout << "~B()" << endl; }
};

int main() {
  shared_ptr<A> ptrA(new A);
  shared_ptr<B> ptrB(new B);

  ptrA->ptr = ptrB;
  ptrB->ptr = ptrA;

  std::cout << "usecount = " << ptrA.use_count() << std::endl;
  return 0;
}