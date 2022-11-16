#include <iostream>

float media_harmonica(float a, float b){
  if(a+b == 0){
//    throw "a = -b (denominador nulo)";
    throw a;
  }
  return 2*a*b/(a+b);
}

int main(void){
  float a, b;
  std::cin >> a >> b;
  try{
    std::cout << media_harmonica(a,b) << std::endl;
  }
  catch(const char* e){
    std::cout << "erro: " << e << std::endl;
  }
  catch(float a){
    std::cout << "a = " << a << std::endl;
  }
  catch(...){
    std::cout << "deu tudo errado\n";
  }
}





