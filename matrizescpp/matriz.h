#ifndef MATRIZ_H
#define MATRIZ_H


class Matriz{
  // no de linhas e colunas da matriz
  int nl, nc;
  float** x;
public:
  Matriz(int _nl=0, int _nc=0);
  ~Matriz();
  void operator=(Matriz& m);

  float& operator()(int i, int j);
  void random();
  void print();
};

#endif // MATRIZ_H
