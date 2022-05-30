#ifndef VETOR2D_H
#define VETOR2D_H

/**
 * @brief A classe Vetor2d serve para
 * lidar com vetores
 * @details Essa classe permite a manipulacao
 * de vetores em duas dimensoes, fazendo diversa
 * operações matemáticas entre eles.
 */
class Vetor2d{
private:
  float x, y;
public:
  // construtor padrao ou default
 // Vetor2d();
  // construtor com argumentos

  /**
   * @brief Vetor2d é o construtor da classe
   * @param x_ é o valor da coordenada x
   * @param y_ é o valor da coordenada y
   *
   * Vetor2d v(4,5);
   *
   * <ul>
   * <li> Item 1 </li>
   * <li> item 2 </li>
   * <li> Item 3 </li>
   * </ul>
   *
   * \f$ \int_a^b f(x) dx \f$
   */
  Vetor2d(float x_=0, float y_=0);

  // construtor de copia
  Vetor2d(Vetor2d& v);

  // Vetor2d(float xy_);
  // destrutor UNICO
  ~Vetor2d();
  void setX(float x_);

  /**
   * @brief getX retorna o valor de x
   * @return o valor armazenado em x
   */
  float getX();
  void setY(float y_);
  float getY();
  void print();
  float angulo();
  Vetor2d produto(float a);
  // sobrecarga de metodo
  float produto(Vetor2d v2);
  // sobrecarga de operador +
  Vetor2d operator +(Vetor2d v);
  Vetor2d operator -(Vetor2d v);
  Vetor2d operator *(float a);
  float operator *(Vetor2d v);
  // friendship (amiga)
  // permite acesso as partes privadas
  friend Vetor2d operator*(float a, Vetor2d v);
};


#endif // VETOR2D_H






