#include <iostream>

using namespace std;

class Vetor{
private:
  float x;
  float y;
public:
  // metodos da classe
  // funcoes-membro
  void setX(float mx){
    x = mx;
  }
  float getX(void){
    return x;
  }
};

int main(){
  Vetor v1;
  // enviando a mensagem "setX"
  // com o parametro "4"
  v1.setX(4);
  v1.x = 4;
  cout << "o x de v1 = " << v1.getX() << endl;

  int x;
  cin >> x; // scanf("%d",&x);
  cout << "Hello World!" << x << endl;
  return 0;
}

