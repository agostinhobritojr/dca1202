#ifndef VETOR2D_H
#define VETOR2D_H

/**
 * @brief A classe Vetor2d serve para
 * ensinar fundamentos de C++
 * @details A classe Vetor2d mostra conceitos
 * de construtores, destrutores, sobrecargas
 *  e várias outras coisas...
 */
class Vetor2d{
private:
  float x, y;
public:
  // construtor padrao nao tem argumentos
  // eh invocado quando apenas o nome
  // do objeto eh fornecido
//  Vetor2d(); // Vetor2d v;
  // construtor com argumentos
  // e valores iniciais default

  /**
   * @brief Vetor2d é o construtor da classe
   * @param x_ é o valor inicial de x
   * @param y_ é o valor inicial de y
   */
  Vetor2d(float x_=0, float y_=0);
  // construtor de copia
  Vetor2d(const Vetor2d &v);
  // destrutor
  // SOH PODE HAVER UM!
  ~Vetor2d();
  /**
   * @brief setX atribui x
   * @param x_ o valor atribuido
   * <ul>
   * <li> opção 1
   * <li> opção 2
   * <li> opção 3
   * </ul>
   * \f$ \int_a^b f(x) dx \f$
   */
  void setX(float x_);
  float getX();
  void setY(float y_);
  float getY(void);
  void print();
  float norma(void);
  float angulo(void);
  Vetor2d unitario(void);
  Vetor2d soma(Vetor2d v);

  /**
   * @brief operator + realiza a soma
   *  de dois vetores
   * @param v é o vetor somado
   * @return A soma entre o objeto
   * e o parametro fornecido
   */
  Vetor2d operator +(Vetor2d v);
  Vetor2d operator -(Vetor2d v);
  Vetor2d operator =(Vetor2d v);
  Vetor2d operator *(float a);
  // produto escalar
  float multiplica(Vetor2d v);
  // produto POR escalar
  Vetor2d multiplica(float a);
  // funcao friend possui DIREITO DE ACESSO
  // as propriedades privadas da classe
  friend Vetor2d operator*(float a, Vetor2d v);
};

Vetor2d operator*(float a, Vetor2d v);
#endif // VETOR2D_H







