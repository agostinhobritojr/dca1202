#include <iostream>

using namespace std;

template <class T>
T media(T a, T b){
  T c;
  c = (a+b)/2;
  return c;
}

template <typename T, typename U>
U funcao(T x){
  U z;
  z = x;
  return z;
}

int main(){
  int a=4, b=5, c;
  float x=4, y=5, z;

  z = funcao<int, float>(a);

//  c = media<int>(a,b);
  c = media(a,b);
  cout << "c = " << c << endl;
//  z = media<float>(x,y);
  z = media(x,y);
  cout << "z = " << z << endl;
  cout << "misto = " << media<int>(a,y) << endl;
  return 0;
}





