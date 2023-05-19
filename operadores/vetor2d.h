// diretivas de compilacao
#ifndef VETOR2D_H
#define VETOR2D_H
#include <ostream>

/**
 * @brief A classe Vetor2d serve para manipular vetores bidimensionais
 *
 * @details A classe Vetor2d ajuda o programador a lidar com diversas operações
 * envolvendo vetores, como armazenamento, soma, subtração e exibição de
 * vetores no terminal
 *
 */
class Vetor2d{
private:
    /**
     * @brief x armazena a coordenada x do vetor
     *
     */
    float x;
    /**
     * @brief y armazena a coordenada y do vetor
     */
    float y;
public:
  // metodo construtor
 // Vetor2d(); // construtor padrao (default)

  // metodo construtor COM ARGUMENTOS
    /**
   * @brief Vetor2d é o construtor com argumentos
   * @details Caso seja invocado na forma de construtor sem argumentos,
   * x e y assumem valores iguais a ZERO
   * @param _x recebe a coordenada x
   * @param _y recebe a coordenada y
   *
   * \code{.cpp}
 * Vetor2d v;
 * Vetor2d v(3,4);
 * \endcode
   */
  Vetor2d(float _x=0, float _y=0);
 // Vetor2d(float _xy);

  // metodo construtor DE COPIA
  // const informa que a variavel copia
  // NAO PODERA SER ALTERADA
  // usado para COPIA PROFUNDA (deep copy)
  Vetor2d(const Vetor2d &copia);

  // metodo destrutor
  ~Vetor2d();

  void setX(float x_);
  float getX();
  void setY(float y_);
  float getY();
  void print(void);
  float norma(void);

  // sobrecargas dos metodos produto
  /**
   * @brief produto calcula o produto do vetor pelo escalar
   * @param a é o escalar que será multiplicado ao vetor atual
   * @return O resultado da multiplicação
   * \f[
   * \overline{Retorno} = \overline{V}  a
   * \f]
   *
   * <ul>
   * <li> Item número 1 </li>
   * <li> Alo, maria! </li>
   * </ul>
   *
   *
   */
  Vetor2d produto(float a);
  float produto(Vetor2d v2);

  Vetor2d soma(Vetor2d v);
  Vetor2d operator + (Vetor2d v);

  Vetor2d operator *(float a);
  // uma funcao amiga eh uma funcao
  // cujo acesso aos campos privados eh
  // permitido
  friend Vetor2d operator *(float a, Vetor2d v);

  friend std::ostream &operator<< (std::ostream& os, Vetor2d v);

};
// FUNCAO
// 4*v1 -> operator*(4,v1)
//Vetor2d operator *(float a, Vetor2d v);

#endif // VETOR2D_H




