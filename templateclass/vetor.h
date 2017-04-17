#ifndef VETOR_H
#define VETOR_H

template <typename T>
class Vetor{
private:
  T x, y;
public:
  Vetor();
  void setX(T mx);
  T getX(void);
  Vetor<T> copia();
};

template <class T>
Vetor<T>::Vetor(){
  x = 0;
  y = 0;
}

template <class T>
Vetor<T> Vetor<T>::copia(){
  Vetor<T> ret;
  ret.x = x;
  ret.y = y;
  return (ret);
}

template <class T>
void Vetor<T>::setX(T mx){
  x = mx;
}

template <class T>
T Vetor<T>::getX(void){
  return x;
}

#endif // VETOR_H

