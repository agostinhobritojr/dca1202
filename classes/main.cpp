#include <iostream>

using namespace std;

class Vetor{
private:
  float x, y;
public:
  void setX(float _x){
    x = _x;
  }
  float getX(void){
    return x;
  }
  void setY(float _y){
    y = _y;
  }
  float getY(void){
    return y;
  }
  void print(void){
    cout << "(" << x << ", " << y << ")";
  }
};


int main(){
  Vetor v1;
  float a;

  cin >> a;
  v1.setX(3);
  v1.setY(4);

  v1.print();
//  cout << endl;
//  cout << "v1 = " << v1.getX() << endl;
  return 0;
}

