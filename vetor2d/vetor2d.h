#ifndef VETOR2D_H
#define VETOR2D_H

class Vetor2d{
private:
    float y;
    float x;
public:
    void setX(float x_);
    float getX();
    void setY(float y_);
    float getY();
    float norma();
    float angulo();
    void print();
};

#endif // VETOR2D_H
