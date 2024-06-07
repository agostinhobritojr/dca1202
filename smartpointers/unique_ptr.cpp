#include <iostream>
#include <memory>
#include <iostream>

class Foo{
  float x, y;
public:
  Foo(float x, float y){
    std::cout << "construtor: nasceu!\n";
    this->x = x;
    this->y = y;
  }
  ~Foo(){
    std::cout << "destrutor: morreu!\n";
  }
  float prod(){
    return x*y;
  }
};

int main(void){
  std::unique_ptr<int> x(new int);
  *x = 3;
  std::cout << "*x = " << *x << std::endl;
  std::cout << "addr x = " << x.get() << std::endl;

  std::unique_ptr<int> z = std::move(x);
  std::cout << "addr x = " << x.get() << std::endl;
  std::cout << "addr z = " << z.get() << std::endl;
  std::cout << std::endl;
  
  std::unique_ptr<int[]> y(new int[20]);
  y[2] = 4;
  std::cout << "y[2] = " << y[2] << std::endl;
  std::cout << "addr = " << y.get() << std::endl;
  

  std::unique_ptr<Foo> p1(new Foo(3,4));
  std::cout << "produto = " << p1->prod() << std::endl;
}