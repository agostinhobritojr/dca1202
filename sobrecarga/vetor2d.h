#ifndef VETOR2D_H
#define VETOR2D_H


class Vetor2d{
private:
  float x, y;
public:
  Vetor2d(float mx=0, float my=0);
  // destrutor
  ~Vetor2d();
  void print();
  void setX(float mx){x=mx;}
  void setY(float my){y=my;}
  float getX(){return x;}
  float getY(){return y;}
  Vetor2d soma(Vetor2d v1);
  Vetor2d operator+(Vetor2d v1);
  Vetor2d operator+(float a);
  Vetor2d operator*(float a);
  // funcoes amigas - friendship
  friend Vetor2d operator*(float a,
                    Vetor2d v1);
};

Vetor2d operator*(float a,
                  Vetor2d v1);



#endif // VETOR2D_H
