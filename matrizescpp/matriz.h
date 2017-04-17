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
  Matriz operator+ (const Matriz &m);
  Matriz operator= (const Matriz &m);
  void rand(void);
  void print(void);
  friend Matriz operator*(float a, const Matriz &m);
  Matriz operator*(float a);
};

#endif // MATRIZ_H
