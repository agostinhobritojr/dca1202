#ifndef MATRIZ_H
#define MATRIZ_H

class Matriz{
private:
  int nlin, ncol;
  float **x;
public:
  Matriz(int nlin=0, int ncol=0);
  float& operator() (int i, int j);
  void print();
};

#endif // MATRIZ_H
