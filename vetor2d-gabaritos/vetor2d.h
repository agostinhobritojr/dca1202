#ifndef VETOR2D_H
#define VETOR2D_H

#include <ostream>

/**
 * @brief The Vetor2d class serve para pipoipasfasdf
 */

class Vetor2d{
private:
    /**
     * @brief y representa o eixo vertical
     */
    float y;
    /**
     * @brief x representa o eixo horizontal
     */
    float x;
public:
    /**
     * @brief Vetor2d é o construtor da classe
     * @param x_ é o valor inicial de x
     * @param y_ é o valor inicial de y
     */
    Vetor2d(float x_=4, float y_=8);
    /**
     * @brief Vetor2d
     * @param copia
     */
    Vetor2d(const Vetor2d &copia);

    ~Vetor2d();
    /**
     * @brief soma calcula a soma de dois vetores
     * usando a equacao \f$ v3 = v1 + v2 \f$
     * @param v1 é o vetor a ser somado
     * @return um vetor com a soma dos dois vetores
     *
     * <ul>
     * <li> item 1 </li>
     * <li> item 2 </li>
     * </ul>
     */
    Vetor2d soma(Vetor2d v1);
    void setX(float x_);
    float getX();
    void setY(float y_);
    float getY();
    float norma();
    float angulo();
    void print();

    friend std::ostream& operator << (std::ostream &os, Vetor2d &v);

};

#endif // VETOR2D_H
