#ifndef VETOR2D_H
#define VETOR2D_H

class Vetor2d {
private:
    // propriedades
    float y;
    float x;
public:
    // construtoRES
    // construtor padraao
 //   Vetor2d();
    // construtorES com argumentos
    Vetor2d(float x_=0, float y_=0);
//    Vetor2d(float xy);
    // construtor de copia
    Vetor2d(const Vetor2d &copia);
    // destrutor
    ~Vetor2d();
    // metodos
    void setX(float x);
    float getX(void);
    void setY(float x_);
    float getY(void);
    void print();

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







