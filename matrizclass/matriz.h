#ifndef MATRIZ_H
#define MATRIZ_H

class Matriz{
private:
  // numero de linhas e colunas
  int nl, nc;
  // array que armazena a matriz
  float **x;
public:
  Matriz(int _nl=0, int _nc=0);
  ~Matriz();
  int getNl();
  int getNc();
  void print();
  float& operator() (int i, int j);
};

#endif // MATRIZ_H
