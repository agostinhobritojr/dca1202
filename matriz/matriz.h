#ifndef MATRIZ_H
#define MATRIZ_H

class Matriz{
private:
  // no. linhas e colunas
  int nl, nc;
  int **x;
public:
  Matriz(int _nl=0, int _nc=0);
  ~Matriz();
  void print();
};

#endif // MATRIZ_H
