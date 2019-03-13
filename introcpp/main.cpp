#include <iostream>
#include <cmath>

#define PI 3.1415

using namespace std;

class Vetor2d{
private:
  float x, y;
public:
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
  float norma(void){
    float tam;
    tam = sqrt(pow(x,2)+
               pow(y,2));

    tam = sqrt(x*x+y*y);
  }
  float teta(void){
    float ang;
    ang = atan2(y,x)*180/M_PI;
    return ang;
  }
  void print(void){
    cout << "(" << x << ","
         << y << ")";
  }
  Vetor2d unitario(void){
    Vetor2d ret;
    ret.x = x/norma();
    ret.y = y/norma();
    return ret;
  }
};

int main(){
  Vetor2d v, u;
  v.setX(3);
  v.setY(4);
  v.print(); cout << endl;
  cout << "tam = " << v.norma() << endl;
  cout << "ang = " << v.teta() << endl;
  u = v.unitario();
  u.print();
  return 0;
}


