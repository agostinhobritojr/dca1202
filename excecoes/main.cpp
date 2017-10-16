#include <iostream>
#include <cmath>
using namespace std;

float geom(float x, float y){
  float ret;
  if(x*y < 0){
    throw "x*y eh menor que zero";
  }
  ret = sqrt(x*y);
  cout << "saindo geometrica\n";
  return ret;
}

float harm(float x, float y){
  float ret;
  if(x+y == 0){
    throw 20.0;
  }
  ret = 2*(x*y)/(x+y);
  cout << "saindo harmonica\n";
  return ret;
}


int main(){
  float x, y, retorno;
  cout << "digite x e y: ";
  cin >> x >> y;

  try{
    retorno = geom(x, y);
    cout << "media geometrica: ";
    cout << retorno << endl;
  }
  catch(const char* e){
    cout << "erro encontrado: " << e << endl;
  }

  try{
    retorno = harm(x,y);
    cout << "media harmonica: ";
    cout << retorno << endl;
  }
  catch(const char* e){
    cout << "erro encontrado: " << e << endl;
  }
  catch(float d){
    cout << "erro double: " << d << endl;
  }
  catch(...){
    cout << "pega qualquer outro tipo de dado" << endl;
  }

  return 0;
}

