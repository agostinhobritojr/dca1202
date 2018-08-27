#include <iostream>

//using namespace std;

class Vetor{
private:
  float x, y;
public:
  // funcoes-membro ou metodos
  void setX(float mx){
    x = mx;
  }

  float getX(void){
    return x;
  }

  // setY
  // getY
  // tamanho
  // angulo
  // unitario

};


int main(){
  Vetor v1;
  v1.setX(3);
  std::cout << "v1.x= " << v1.getX() << std::endl;
  return 0;
}


