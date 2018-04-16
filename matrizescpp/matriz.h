#ifndef MATRIZ_H
#define MATRIZ_H


class Matriz{
  // no de linhas e colunas da matriz
  int nl, nc;
  float** x;
public:
  Matriz(int _nl, int _nc);
  ~Matriz();
  float& operator()(int i, int j);
  void random();
  void print();
};

#endif // MATRIZ_H
