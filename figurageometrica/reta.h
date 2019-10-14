#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"

/**
 * @brief A classe reta implementa uma
 * reta no plano cartesiano
 */
class Reta : public FiguraGeometrica{
private:
  /**
   * @brief x1 eh a coordenada x
   * do ponto inicial
   */
  int x1;
  int y1; /** @brief y1 eh o y inicial **/
  int x2;
  int y2;
public:
  /**
     * @brief Reta eh o construtor da classe
     * @param _x1 coordenada x ponto inicial
     * @param _y1 coordenada y ponto inicial
     * @param _x2 coordenada x ponto final
     * @param _y2 coordenada y ponto final
     */
    Reta(int _x1, int _y1, int _x2, int _y2);

    /**
     * @brief alo diz um ola para a reta
     * @param a eh o tamanho do ola
     * @return se a reta escutou (1=sim, 0=nao)
     *
     * @details exemplo de uso da reta
     *
     * A reta eh definida como \f[ y = ax +b \f]
     *
     * <pre>
     * Reta r;
     * int x;
     * x = r.alo(23);
     * </pre>
     *
     * <ul>
     * <li> Diz alo
     * <li> Recebe ola
     * <li> Não serve pra nada
     * </ul>
     */
    int alo(int a);
void draw();
};

#endif // RETA_H
