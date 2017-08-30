#include <iostream>

using namespace std;

int global;

class Vetor{
  float x, y;
  int valor;
public:
  // funcao construtor
  // tem o mesmo nome da classe
  // construtor padrao (default)
  Vetor(){
    cout << "construtor\n";
    x = 0;
    y = 0;
    valor = global++;
  }
  // sobrecarga do construtor para recepcao
  // de valores iniciais nos argumentos
  Vetor(float _mx, float _my){
    cout << "construtor com argumentos float\n";
    x = _mx; y=_my;
    valor = global++;
  }

  ~Vetor(){
    cout << "morre, deabo: "<< valor << "!\n";
  }

  void setX(float _x){ x=_x;}
  float getX(void){return x;}
  void setY(float _y){ y=_y;}
  float getY(void){return y;}
};


int main(){
  global = 0;
  Vetor v1;
  Vetor v2(3,4);
  Vetor v3(3.0,4);
  cout << v2.getX() << endl;
  cout << v2.getY() << endl;
  return 0;
}












