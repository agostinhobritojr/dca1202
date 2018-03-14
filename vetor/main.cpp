#include <iostream>

using namespace std;

class Vetor{
  // variaveis e metodos privados
  // interfaces privadas
private:
  float x, y;
  // interfaces publicas
public:
  float z;
  void setX(float _x){
    if(_x >= 0){
      x = _x;
    }
    else{
      x = 0;
    }
  }
  float getX(void){
    return x;
  }
  /* erro!!!
  for(int i=0; i<3; i++){
    cout << "alo";
  }
  */
}; // <==================

int main(){
  Vetor v1;
  cout << "x = " << v1.getX() << endl;


  v1.setX(-4);
  v1.z = -7;
  cout << "v1x = " << v1.getX() << endl;
  return 0;
}
