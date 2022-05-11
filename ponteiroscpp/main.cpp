#include <iostream>

class Vetor2d{
private:
  int x, y;
public:
 /* Vetor2d(){
    std::cout << "construtor padrao\n";
    x = y = 0;
  }*/
  Vetor2d(int x_=0, int y_=0){
    std::cout << "construtor com argumentos\n";
    x = x_; y = y_;
  }
  void setX(int x_){
    x = x_;
  }
  int getX(void){
    return x;
  }

};


int main(){
  Vetor2d *v1, *v2, *v3;

  // ativa construtor padrao
  v1 = new Vetor2d;

  // ativa construtor com argumentos
  v2 = new Vetor2d(3,4);

  // ativa construtor padrao
  v3 = new Vetor2d[3];
  v3[1].setX(4);

  delete v1;
  delete v2;
  delete [] v3;

  int *x;
  x = new int;
  *x = 3;
  std::cout << "*x = " << *x << std::endl;
  delete x;

  int n=10;
  x = new int[n];
  x[2] = 3;
  delete [] x;

 /*
  Vetor2d v, *v1;
  v1 = &v;
  v1->setX(3);
  std::cout << v1->getX() << std::endl;
  */
  return 0;
}
