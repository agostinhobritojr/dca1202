#include <iostream>

template <typename T, typename U, int N=10>
U media(T a, T b){
  T vetor[N];
  U ret;
  ret = (a+b)/2.0;
  return ret;
}

int main(void){
  int a=1, b=2;
  float x=1, y=2;
  //c = media<int>(a, b);
  std::cout << "media (int)   = ";
  std::cout << media<int, float, 15>(a, b) << std::endl;
  std::cout << "media (float) = ";
  std::cout << media<float, int>(x, y) << std::endl;
}







