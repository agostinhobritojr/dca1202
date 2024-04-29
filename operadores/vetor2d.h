#ifndef VETOR2D_H
#define VETOR2D_H

class Vetor2d{
private:
    float y;
    float x;
public:
    Vetor2d(float x_=4, float y_=8);
    Vetor2d(const Vetor2d &copia);
    // Funcao destrutor
    ~Vetor2d();
    Vetor2d soma(Vetor2d v1);
    Vetor2d operator + (Vetor2d v1);

    void setX(float x_);
    float getX();
    void setY(float y_);
    float getY();
    float norma();
    float angulo();
    void print();
};

#endif // VETOR2D_H
