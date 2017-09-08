// o uso do ifndef/define serve para
// evitar a redefinicao de classes
// ou funcoes

#ifndef VETOR_H
#define VETOR_H

/**
 * @brief The Vetor class implementa vetores 2D
 *
 * Essa classe serve para oferecer suporte
 * para lidar com operacoes de vetores 2d
 */

class Vetor{
private:
  float x, y;
public:
  /**
   * @brief setX serve para atribuir um valor ao x
   * @param _x recebe o valor fornecido pelo usuario
   */

  void setX(float _x);
  /**
   * @brief getX recupera o valor de x
   * @return o valor de x
   *
   * <ol>
   * <li>Alo</li>
   * <li>Maria</li>
   * <li>Jose</li>
   * </ol>
   *
   *
   * Equacao: \f$ \int_a^b f(x) \,dx \f$
   */
  float getX(void);


  void setY(float _y);
  float getY(void);
  void print(void);
  float norma();
  float angulo();
  Vetor soma(Vetor v2);
  Vetor soma(float a);
  Vetor sub(Vetor v2);
  Vetor mult(float a);
};

#endif // VETOR_H

