#include <iostream>

float media_harmonica(float a, float b){
  if(a+b == 0){
//    throw "a = -b (denominador nulo)";
    throw 20;
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
/*  catch(int e){
    std::cout << "erro: " << e << std::endl;
  }
*/
  catch(float e){
    std::cout << "erro: " << e << std::endl;
  }
  catch(...){
    std::cout << "sei lah\n";
  }
}


