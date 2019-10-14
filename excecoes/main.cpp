#include <iostream>
#include <cmath>

using namespace std;

float geometrica(float a, float b){
  float ret;
  if(a*b > 0){
    ret = sqrt(a*b);
  }
  else {
    // lancamento de excecao
    //throw "O produto a*b < 0";
    throw 20.0;
  }
  cout << "fim da funcao\n";
  return  ret;
}

int main(){
  float a, b, z;
  cout << "digite a e b: ";
  cin >> a >> b;

  try {
    z = geometrica(a,b);
    cout << "geometrica = ";
    cout << z << endl;
  } catch (const char* e) {
    cout << "erro = " << e << endl;
  }
  catch(float a){
    cout << "peguei o erro = " << a << endl;
  }
  catch(...){
    cout << "sem match no tipo de dado\n";
  }
  return 0;
}



