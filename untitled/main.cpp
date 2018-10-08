#include <iostream>

using namespace std;

template <class T>
T media(T a, T b){
  T ret;
  ret = (a+b)/2;
  return ret;
}

int main(){
  int a, c;
  float b;
  float x;
  a = 4; b = 5;
  c = media<int>(a,b);
  // pode, MAS NAO DEVE
  c = media<int>(a,b);
  x = media<float>(a,b);
  cout << "media= " << c << endl;
  return 0;
}
