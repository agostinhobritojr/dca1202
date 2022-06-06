#include <iostream>

template <typename T>
T media(T a, T b){
  return (a+b)/2;
}

template <typename T, typename U>
T media2(T a, U b){
  return (a+b)/2;
}

int main(){
  int x=3, y=4, z;
  float a=3, b=4, c;
//  z = media<int>(x,y);
  z = media(x,y);
  std::cout << "media = " << z << std::endl;
//  c = media<float>(a,b);
  c = media<float>(a,y);
  std::cout << "media = " << c << std::endl;
  return 0;
}


