#ifndef VETOR_H
#define VETOR_H

template <typename T>
class Vetor{
private:
  T x, y;
public:
  Vetor(){

  }
  void setX(T mx){
    x = mx;
  }
  T getX(void){
    return x;
  }
};

#endif // VETOR_H

