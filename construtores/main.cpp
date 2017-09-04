#include <iostream>

using namespace std;

int global;

class Vetor{
  float x, y;
  float *pont;
  int valor;
public:
  // funcao construtor
  // tem o mesmo nome da classe
  // construtor padrao (default)
  Vetor(){
    cout << "construtor\n";
    x = 0;
    y = 0;
    pont = (float*)45;
    valor = global++;
  }
  // sobrecarga do construtor para recepcao
  // de valores iniciais nos argumentos
  Vetor(float _mx, float _my){
    cout << "construtor com argumentos float\n";
    x = _mx; y=_my;
    valor = global++;
  }

  Vetor(Vetor &v){
    cout << "construtor de copia\n";
    x = v.x;
    y = v.y;
    pont = (float*)38;
  }

  ~Vetor(){
    cout << "morre, deabo: "<< valor << "!\n";
  }

  void setX(float _x){ x=_x;}
  float getX(void){return x;}
  void setY(float _y){ y=_y;}
  float getY(void){return y;}
  void printPont(){
    cout << "pont = " << pont << endl;
  }

  void copia(Vetor v){
    v.printPont();
    x = v.x;
    y = v.y;
  }
};


int main(){
  global = 0;
  Vetor v1;
  Vetor v2(3,4), v5=v2, v6(v2);
  Vetor v3(3.0,4);
  cout << v2.getX() << endl;
  cout << v2.getY() << endl;
  v3.printPont();
  v1.copia(v3);
  return 0;
}












