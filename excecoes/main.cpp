#include <iostream>
#include <cmath>

using namespace std;

float geometrica(float a, float b){
  if(a*b >=0){
    return sqrt(a*b);
  }
  else{
    // lanca a excecao
    throw "a*b < 0";
    cout << "depois da excecao" << endl;
  }
}

float harmonica(float a, float b){
  return 2*a*b/(a+b);
}

int main(){
  float x, y;
  cout << "digite x e y: ";
  cin >> x >> y;

  try{
    cout << "geometrica = " << geometrica(x,y) << endl;
  }
  catch(const char* e){
    cout << "erro: " << e << endl;
  }

  cout << "harmonica  = " << harmonica(x,y) << endl;
  return 0;
}
