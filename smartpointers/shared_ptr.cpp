#include <iostream>
#include <memory>
#include <thread>

class Foo {
  float x, y;

 public:
  Foo(float x, float y) {
    std::cout << "construtor: nasceu!\n";
    this->x = x;
    this->y = y;
  }
  ~Foo() { std::cout << "destrutor: morreu!\n"; }
  float prod() { return x * y; }
};

void foo(std::shared_ptr<Foo> foo) {
  std::cout << "foo: " << foo.use_count() << std::endl;
}

int main(void) {
  std::shared_ptr<Foo> p1(new Foo(3, 4));
  std::shared_ptr<Foo> p2, p3;
  p3 = p2 = p1;
  std::cout << p1->prod() << std::endl;
  std::cout << p2->prod() << std::endl;
  std::cout << "contador de referencias: " << p1.use_count() << std::endl;

  std::thread t1(foo, p1), t2(foo, p1), t3(foo, p1);
  t1.join();
  t2.join();
  t3.join();
}