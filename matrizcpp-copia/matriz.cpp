#include "matriz.h"
#include <cstdlib> // para exit()
#include <iostream> // para cin/cout
#include <iomanip> // para setw() e setprecision()
#include <cstring>

using namespace std;

Matriz::Matriz(int _nl, int _nc): nl(_nl), nc(_nc){
  aloca();
}

Matriz::Matriz(const Matriz &a){
  nl = a.nl; nc=a.nc;
  aloca();
  cout << "construtor de copia\n";
}

void Matriz::aloca(){
  if(nl > 0 && nc > 0){
    // aloca a matriz dinamicamente
    x = new float*[nl];
    if(x == nullptr){
      cout << "deu ruim\n";
      exit(0);
    }
    x[0] = new float[nl*nc];
    if(x[0] == nullptr){
      delete [] x;
      cout << "deu ruim\n";
      exit(0);
    }
    // ajusta os enderecos das linhas
    for(int i=1; i<nl; i++){
      x[i] = x[i-1]+nc;
    }
  }
  else{
    nl = nc = 0;
  }
}

Matriz::~Matriz(){
  if(nl > 0 && nc > 0){
    delete [] x[0];
    delete [] x;
  }
}

void Matriz::print(){
  if(!(nl>0 && nc>0)){
    cout << "[[]]";
    return;
  }
  cout << "[";
  for(int i=0; i<nl; i++){
    if(i!=0) cout << " ";
    cout << "[";
    for(int j=0; j<nc; j++){
      cout << setprecision(1) << fixed;
      cout << setw(4);
      cout << x[i][j];
      if(j!=nc-1)
        cout << " ";
    }
    cout << "]";
    if(i!=nc-2)
      cout << endl;
  }
  cout << "]";
}

void Matriz::randomize(){
  if(!(nl>0 && nc >0)){
    return;
  }
  for(int i=0; i<nl; i++){
    for(int j=0; j<nc; j++){
      x[i][j] = rand()%20;
    }
  }
}

float& Matriz::operator()(int i, int j){
  return x[i][j];
}

Matriz Matriz::operator*(float a){
  Matriz ret(nl, nc);
  if(!(nl>0 && nc>0)){
    exit(0);
  }
  for(int i=0; i<nl; i++){
    for(int j=0; j<nc; j++){
      ret.x[i][j] = x[i][j]*a;
    }
  }
  for(int i=0; i<nl*nc; i++){
    ret.x[0][i] = x[0][i]*a;
  }
  cout << "saindo multiplica\n";
  return ret;
}

Matriz Matriz::operator=(const Matriz &m){
  // Matriz A(3,3), B(5,4), C;
  // Matriz D(3,3), E;
  //
  // 1: testa se o objeto que executa
  // o metodo eh o mesmo passado como
  // parametro
  // A = A
  if(this == &m){
    return *this;
  }
  // 2: matrizes de mesmo tamanho mas
  // com possiveis valores diferentes
  // D = A;
  if(nl == m.nl && nc == m.nc){
    if((nl != 0) && (nc != 0)){
      memcpy(x[0], m.x[0], nl*nc*sizeof(float));
    }
    return *this;
  }
  // 3: matrizes tem tamanhos diferentes
  // - liberar memoria antiga
  // - alocar nova memoria
  // - copiar valores
  cout << "passou\n";
  if(nl != 0 && nc != 0){
    cout << "nl = " << nl << endl;
    cout << "nc = " << nc << endl;
    delete [] x[0];
    delete [] x;
  }
  // copia os tamanhos
  nl = m.nl; nc = m.nc;
  // 4: matriz atribuida tem tamanho nulo
  // A = C;
  if(nl == 0 || nc == 0){
    // grava o endereco nulo para lembrar
    // que nao ha memoria associada com
    // o x
    x = nullptr;
    return *this;
  }
  // aloca a memoria
  // identico ao construtor
  x = new float*[nl];
  if(x == nullptr){ exit(0);}
  x[0] = new float[nl*nc];
  if(x[0] == nullptr){ exit(0);}
  for(int i=1; i<nl; i++){
    x[i] = x[i-1] + nc;
  }
  // copia a matriz
  // 5: tambem contemplada (matriz nao possui
  // valores alocados mas recebe matriz com
  // tamanho diferente de zero
  // C = A;
  memcpy(x[0], m.x[0], nl*nc*sizeof(float));
  cout << "saindo igual\n";
  return *this;
}












