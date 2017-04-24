#ifndef MATRIZ_H
#define MATRIZ_H

/**
 * @brief The Matriz class serve para realizar operacoes
 * matriciais
 *
 * A classe Matriz realiza operacoes de soma,
 * subtracao, igualdade, multplicacao, e sobrecarga
 * de outros operadores
 */
class Matriz{
private:
  int nlin, ncol;
  float **x;
public:
  /**
   * @brief Matriz eh o construtor da classe
   * @param nlin recebe o numero de linhas
   * @param ncol recebe o numero de colunas
   *
   * O construtor da classe cria uma matriz
   * com nlin x ncol elementos
   * <ol>
   * <li> alo </li>
   * <li> maria </li>
   * </ol>
   */
  Matriz(int nlin=0, int ncol=0);
  ~Matriz();
  Matriz(Matriz &m);
  /**
   * @brief operator () serve para recuperar e atribuir o elemento
   * @param i indice da linha
   * @param j indice da coluna
   * @return  referencia para o elemento da matriz
   */
  float& operator() (int i, int j);
  Matriz operator+ (const Matriz &m);
  Matriz operator= (const Matriz &m);
  void rand(void);
  void print(void);
  friend Matriz operator*(float a, const Matriz &m);
  Matriz operator*(float a);
};

#endif // MATRIZ_H
