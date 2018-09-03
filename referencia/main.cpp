#include <iostream>

using namespace std;

void funcao(float &x){
  cout << "endx = " << &x << endl;
  x = 4;
}

int main(){
  float y;
  y = 3;
  cout << "endy = " << &y << endl;
  cout << "y = " << y << endl;
  funcao(y);
  cout << "y = " << y << endl;
  return 0;
}
