#include <iostream>
#include <cmath>

using namespace std;
float geometrica(float x, float y){
  return(sqrt( x * y));
}

float harmonica(float x, float y){
  if( x == -y){
    // lanca a excecao
    //throw "x igual a -y";
    throw 20.0;
  }
  return(2*x*y / (x+y) );
}

int main(){
  float x, y;
  cout << "digite x: ";  cin >> x ;
  cout << "digite y: ";  cin >> y ;

  try{
    cout << "harmonica  = " << harmonica(x,y) << endl;
  }
  catch(const char* msg){
    cout << "mensagem = " << msg << endl;
  }
  catch(int valor){
    cout << "valor = " << valor << endl;
  }
  catch(float valor){
    cout << "real = " << valor << endl;
  }
  catch(...){
    cout << "pegou lixo" << endl;
  }

  cout << "geometrica = " << geometrica(x,y) << endl;
  return 0;
}

