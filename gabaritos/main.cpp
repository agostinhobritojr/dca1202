#include <iostream>

template <typename T>
T media(T a, T b){
  return (a+b)/2;
}

template <typename T, typename U>
U media2(T a, T b){
  return (a+b)/2;
}

template <typename T, int n=10>
void teste(){
  T vetor[n];
}

int main(){
  int a, b, c;
  float x, y, z;
  a = 2; b = 3;
  teste<int>();
  c = media2<int, float>(a,b);
//  c = media(a,b);
  std::cout << "c=" << c << std::endl;
  x = 2; y = 3;
  z = media<int>(x,y);
  z = media<float>(a,y);
  std::cout << "z=" << z << std::endl;
  return 0;
}


