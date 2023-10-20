#ifndef ALO_H
#define ALO_H

template <typename T>
class Alo{
  T x, y;
public:
  Alo(T param);
  T getX(void);
  Alo getAlo();
};

template <typename T>
Alo<T>::Alo(T param){
  x = y = param;
}

template <typename T>
T Alo<T>::getX(void){
  return x;
}

template <typename T>
Alo<T> Alo<T>::getAlo(void){
  Alo<T> ret;
  return ret;
}
#endif