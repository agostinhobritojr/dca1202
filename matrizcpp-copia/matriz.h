#ifndef MATRIZ_H
#define MATRIZ_H

/**
 * @brief A classe Matriz armazena matrizes
 * bidimensionais e realiza operacoes
 * matriciais entre objetos da classe
 */
class Matriz{
private:
  /**
   * @brief x guarda a matriz
   */
  float **x;
  int nl, nc;
  void aloca();
public:
  /**
   * @brief Matriz é o construtor da classe
   * @param _nl é a quantidade de linhas
   * @param _nc é a quantidade de colunas
   */
  Matriz(int _nl=0, int _nc=0);

  Matriz(const Matriz&a);

  /** @brief ~Matriz é o destrutor da classe
  */
  ~Matriz();

  /**
   * @brief print mostra a matriz na saida
   * padrão
   */
  void print();
  void randomize();
  float &operator()(int i, int j);
  Matriz operator*(float a);
  Matriz operator=(const Matriz& m);
};

#endif // MATRIZ_H






