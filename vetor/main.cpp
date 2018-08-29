#include <iostream>
#include <cmath>

using namespace std;

class Vetor{
private:
  float y;
  float x;
public:
  // funcoes-membro ou metodos
  void setX(float mx){
    x = mx;
  }
  float getX(void){
    return x;
  }

  void setY(float my){
    y = my;
  }

  float getY(void){
    return y;
  }

  float tamanho(void){
    return sqrt(x*x+y*y);
  }

  float angulo(void){
    return 180.0/3.1415*atan(y/x);
  }

  Vetor unitario(void){
    Vetor ret;
    ret.x = x / tamanho();
    ret.y = y / tamanho();
    return ret;
  }
  void print(void){
    cout << "(" << x << ","
         << y << ")";
  }
  float escalar(Vetor v2){
    return x*v2.x+y*v2.y;
  }
};

float escalar(Vetor v1, Vetor v2){
  return v1.getX()*v2.getX()+
      v1.getY()*v2.getY();
}

int main(){
  Vetor v1, v2;
//  cout << v1.x << endl;
  v1.setX(3);
  v1.setY(4);
  cout << "v1.x= " << v1.getX() << endl;
  cout << "v1.y= " << v1.getY() << endl;
  cout << "tamanho = " << v1.tamanho() << endl;
  cout << "angulo = " << v1.angulo() << endl;
  v2 = v1.unitario();
  cout << "unitario = " << v2.getX() <<
          ", " << v2.getY() << endl;
  v2.print();
  cout << endl;

  cout << "v2 = ";
  v1.print();
  cout << " + ";
  v2.print();
  cout << endl;
  v2.setX(5);
  v2.setY(11);
  cout << "escalar = " << escalar(v1,v2) << endl;
  cout << "escalar = " << v1.escalar(v2) << endl;

  return 0;
}
