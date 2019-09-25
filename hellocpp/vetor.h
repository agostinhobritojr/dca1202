#ifndef VETOR_H
#define VETOR_H

/**
 * @brief A classe vetor serve para lidar
 * com vetores
 */

class Vetor{
private:
  float x, y;
public:
  // construtor com argumentos
  // ----
  // a inicializacao dos argumentos
  // com seus valores iniciais
  // deve ser feito no arquivo de
  // HEADER
  Vetor(float mx=0, float my=0);
  // construtor padrao
 // Vetor();
  // destrutor
  ~Vetor();
  // construtor de cohpia
  Vetor(const Vetor &v);
  /**
   * @brief setX atribui o valor para x
   * @param mx recebe o valor atribuído
   */
  void setX(float mx);
  float getX();
  void setY(float my);
  float getY();
  float norma(void);
  void print(void);
  float angulo();

  Vetor soma(Vetor v2);


  Vetor sub(Vetor v2);
  Vetor mult(float a);
  // sobrecarga de metodos
  float mult(Vetor v2);
};
#endif // VETOR_H
