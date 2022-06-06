#include <iostream>

class Vetor2d{
private:
  float x;
public:
  Vetor2d(){
    std::cout << "construtor default\n";
  }
  Vetor2d(float _x){
    x = _x;
    std::cout << "construtor com argumentos\n";
  }
  void setX(float _x){
    x = _x;
  }
};

int main(){
  Vetor2d *v;
  int *x, n=1;

  // operador new
  v = new Vetor2d;
  v->setX(4);
  // operador delete
  delete v;

  // operador new
  v = new Vetor2d(4);
  v->setX(4);
  // operador delete
  delete v;

  // operador new
  v = new Vetor2d[n];
  v[1].setX(4);
  // operador delete
  delete [] v;

  // operador new
  x = new int;
  *x = 4;
  // operador delete
  delete x;

  // operador new[]
  x = new int[n];
  x[1] = 4;
  // operador delete[]
  delete [] x;

  std::cout << "Hello World!" << std::endl;
  return 0;
}
