#ifndef VETOR2D_H
#define VETOR2D_H

/**
 * @brief A classe Vetor2d implementa o conceito
 * de um vetor bidimensional
 * @details A classe Vetor2d pode ser usada para
 * realizar operações matemáticas com vetores.
 */
class Vetor2d {
private:
    // propriedades
    /**
     * @brief y representa a coordenada y do vetor
     */
    float y;
    /**
     * @brief x representa a coordenada x do vetor
     */
    float x;
public:
    // construtoRES
    // construtor padraao
 //   Vetor2d();
    // construtorES com argumentos
    /**
     * @brief Vetor2d é o construtor da classe
     * @param x_ valor inicial de x (default = 0)
     * @param y_ valor inicial de y (default = 0)
     * <ul>
     * <li> item 1 </li>
     * <li> item 2 </li>
     * <li> item 3 </li>
     * </ul>
     * <pre>
     * Vetor2d v(3,5);
     * </pre>
     */
    Vetor2d(float x_=0, float y_=0);
//    Vetor2d(float xy);
    // construtor de copia
    Vetor2d(const Vetor2d &copia);
    // destrutor
    ~Vetor2d();
    // metodos
    void setX(float x);
    /**
     * @brief getX retorna o valor de x
     * @return o valor de x
     */
    float getX(void);
    void setY(float x_);
    float getY(void);
    void print();
    /**
     * @brief norma calcula o tamanho do vetor
     * @details a norma é calculada pela equação
     * \f$\sqrt(x^2 + y^2)\f$
     * @return a norma do vetor
     */
    float norma();
    float angulo();
    Vetor2d unitario();
    Vetor2d soma(Vetor2d v1);

    // sobrecargas do metodo produto
    // produto POR escalar
    Vetor2d produto(float a);
    // produto escalar
    float produto(Vetor2d v1);
};

#endif // VETOR2D_H







