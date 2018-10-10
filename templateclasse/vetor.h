#ifndef VETOR_H
#define VETOR_H

template <class T>
class Vetor{
  T x, y;
public:
  Vetor();
  Vetor(T _x, T _y);
  T getX(){
    return x;
  }
  T getY(){
    return y;
  }
  Vetor<T> soma(Vetor<T> a);
};

template <class T>
Vetor<T> Vetor<T>::soma(Vetor<T> a){
  Vetor<T> ret;
  return ret;
}

template <class T>
Vetor<T>::Vetor(){

}

template <class T>
Vetor<T>::Vetor(T _x, T _y){
  x = _x; y = _y;
}

#endif // VETOR_H
