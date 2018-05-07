#include <iostream>
#include <cmath>

using namespace std;

class Alo{
public:
  void maria(void){
    cout << "tah-dah!" << endl;
  }
};


float geometrica(float a, float b){
  if(a*b >=0){
    return sqrt(a*b);
  }
  else{
    // lanca a excecao
    if(a > 0 && b < 0){
      throw "a*b < 0";
    }
    else{
      Alo a;
      throw a;
    }
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
    cout << "geometrica = " << flush;
    cout << geometrica(x,y) << endl;
  }
  catch(const char* e){
    cout << "erro: " << e << endl;
  }
  catch(float x){
    cout << "erro: " << x << endl;
  }
  catch(Alo a){
    a.maria();
  }
  catch(...){
    cout << "tipo de dado desconhecido" << endl;
  }

  cout << "harmonica  = " << harmonica(x,y) << endl;
  return 0;
}
