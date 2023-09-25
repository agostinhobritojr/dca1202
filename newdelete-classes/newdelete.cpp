#include <iostream>

class Vetor2d{
  // por default, as propriedades sao PRIVATE
  int x, y;
public:
 /* Vetor2d(){
    std::cout << "construtor padrao\n";
    x = y = 0;
  }
  */
  Vetor2d(int x=0, int y=0){
    std::cout << "construtor com argumentos\n";
    this->x = x; this->y = y;
  }
  ~Vetor2d(){
    std::cout << "destrutor\n";
  }
  void print(){
    std::cout << "(" << x << "," << y << ")\n";
  }
};

int main(void){
  Vetor2d *v1, *v2, *v3;
 // v1 = new Vetor2d;
//  v1->print();
//  delete v1;
  v2 = new Vetor2d(3,4);
  v2->print();
  delete v2;
  std::cout << "\n";

  v3 = new Vetor2d [10];
  v3[3].print();
  delete [] v3;


}