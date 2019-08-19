#include <iostream>

using namespace std;

class Vetor{
private:
  float x, y;
public:
  void setX(float mx){
    x = mx;
  }
  float getX(){
    return x;
  }
  void setY(float my){
    y = my;
  }
  float getY(){
    return y;
  }

};

int main(){
  Vetor v1;
  v1.setX(3);
  cout << "x = ";
  cout << v1.getX() << "\n";
 // v1.y = 4;
  return 0;
}







