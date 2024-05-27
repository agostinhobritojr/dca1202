#include <iostream>
#include "funcoes.h"

int main(){
    float a=1, b=2, c;
    int x=1, y=2, z;

    alo<float>();
    //    z = media<int>(x, y);
    c = media<float>(a, y);
    std::cout << "c = " << c << std::endl;

    c = media2<int, float>(x, y);
  //  c = media<float>(a, b);
    c = media(a, b);
    std::cout << "c = " << c << std::endl;
    return 0;
}
