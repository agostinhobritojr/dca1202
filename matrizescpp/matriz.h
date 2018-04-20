#ifndef MATRIZ_H
#define MATRIZ_H

/**
 * @brief The Matriz class serve para realizar
 * operacoes matematicas entre matrizes de
 * dados do tipo float.
 */
class Matriz{
  // no de linhas e colunas da matriz
  int nl, nc;
  float** x;
public:
  /**
   * @brief Matriz eh o construtor da classe.
   * @details Ele
   * realiza alocacao dinamica de um array bidimensional
   * que armazena a matriz a ser processada
   * @param _nl eh a quantidade de linhas que a matriz
   * terá
   * @param _nc é a quantidade de colunas
   * <ol>
   * <li> Se _nl ou _nc iguais a zero a matriz terá
   * todas as dimensoes definidas como zero</li>
   * <li> Se as dimensoes forem negativas,
   * o programa será assassinado </li>
   * </ol>
   */
  Matriz(int _nl=0, int _nc=0);
  ~Matriz();
  Matriz(Matriz& m);
  /**
   * @brief operator = copia o estado da matriz
   * fornecida para o objeto atual
   *
   * @details processos de alocação dinâmica
   * são usados para criar uma matriz com as
   * mesmas dimensões da matriz fornecida e então
   * essa matriz é copiada para o objeto atual.
   *
   * \f[ \int_a^b f(x) dx \f]
   *
   * @param m é a matriz cujo estado será copiado
   *
   * @return uma matriz que poderá ser usada em
   * um processo de atribuiçao de valores encadeados
   *
   */
  Matriz operator=(const Matriz& m);
  Matriz operator+(Matriz& m);
  float& operator()(int i, int j);
  void random();
  void print();
};

#endif // MATRIZ_H
