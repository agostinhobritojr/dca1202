#ifndef MATRIZ_H
#define MATRIZ_H

class Matriz{
private:
  int nlin, ncol;
  float **x;
public:
  Matriz(int nlin=0, int ncol=0);
  ~Matriz();
  Matriz(Matriz &m);
  float& operator() (int i, int j);
  Matriz operator+ (Matriz &m);
  void rand(void);
  void print(void);
};

#endif // MATRIZ_H
