#include <iostream>

using namespace std;

class Vetor2d{
private:
  float x, y;
public:
  setX(float mx){
    x = mx;
  }
};


int main(){
  Vetor2d v;
  v.setX(3.4);
  return 0;
}



