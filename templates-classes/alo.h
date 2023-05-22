#ifndef ALO_H
#define ALO_H

template <typename T>
class Alo{
private:
    T x;
public:
    Alo(T param);
    T getX();
    Alo<T> getAlo();
};

template <typename T>
Alo<T>::Alo(T param){
    x = param;
}

template <typename T>
T Alo<T>::getX(){
    return x;
}

template <typename T>
Alo<T> Alo<T>::getAlo(){
    Alo<T> a;
    return a;
}

#endif // ALO_H
