#ifndef VETOR_H
#define VETOR_H

#include <cmath>
#include <iostream>

template <class T>
class Vetor;

using namespace std;

template<class T>
Vetor<T> operator*(float a, Vetor<T> v);

template <class T>
class Vetor{
private:
  T x, y;
public:
  Vetor();
  Vetor(T _x, T _y);
/*  Vetor(Vetor &v);
  ~Vetor();
*/
  void setX(T _x);
  T getX(void);
/*  void setY(float _y);
  float getY(void);
  float norma();
  float teta();
  void print(void);
  void negativo(void);
  void negativo(int mode);
  Vetor soma(Vetor v);
  Vetor subtracao(Vetor v);
  Vetor multiplicacao(float a);
  */
  // sobrecarga do operador +
  Vetor operator + (Vetor v);
  /*
  Vetor operator - (Vetor v);
  Vetor operator * (float a);
  float operator * (Vetor v);

  Vetor operator++();
  Vetor operator++(int);
  */
  friend Vetor<T> operator*(float a, Vetor<T> v);
};

template<class T>
Vetor<T> operator*(float a, Vetor<T> v){
  Vetor<T> ret;
  ret.x = a * v.x;
  ret.y = a * v.y;
  return(ret);
}

template <class T>
Vetor<T>::Vetor(){
}

template<class T>
Vetor<T>::Vetor(T _x, T _y){
  x = _x; y = _y;
}

/*
Vetor::Vetor(Vetor &v){
 // cout << "construtor de copia\n";
  x = v.x;
  y = v.y;
}

Vetor::~Vetor()
{
 // cout << "destrutor da classe\n";
}
*/
template <class T>
void Vetor<T>::setX(T _x){
  x = _x;
}

template <class T>
T Vetor<T>::getX(void){
  return x;
}
/*
void Vetor::setY(float _y){
  y = _y;
}
float Vetor::getY(void){
  return y;
}

float Vetor::norma(){
  return sqrt(x*x + y*y);
}

float Vetor::teta(){
  return 180*atan(y/x)/M_PI;
}

void Vetor::print(void){
  cout << "(" << x
       << "," << y
       << ")";
}

void Vetor::negativo(void)
{
  x = -x; y = -y;
}

void Vetor::negativo(int mode)
{
  if(mode == 1){
    x = -x;
  }
  if(mode == 2){
    y = -y;
  }
}

Vetor Vetor::soma(Vetor v){
  Vetor ret;
  ret.x = x + v.x;
  ret.y = y + v.y;
  return (ret);
}

Vetor Vetor::subtracao(Vetor v){
  Vetor ret;
  ret.x = x - v.x;
  ret.y = y - v.y;
  return (ret);
}

Vetor Vetor::multiplicacao(float a){
  Vetor ret;
  ret.x = a*x;
  ret.y = a*y;
  return (ret);
}
*/
template <class T>
Vetor<T> Vetor<T>::operator + (Vetor<T> v){
  Vetor<T> ret;
  ret.x = x+v.x;
  ret.y = y+v.y;
  return(ret);
}
/*
Vetor Vetor::operator - (Vetor v){
  Vetor ret;
  ret.x = x-v.x;
  ret.y = y-v.y;
  return(ret);
}

Vetor Vetor::operator *(float a){
  Vetor ret;
  ret.x = a*x;
  ret.y = a*y;
  return (ret);
}

float Vetor::operator* (Vetor v){
  return(x*v.x+y*v.y);
}

Vetor Vetor::operator++(){
  Vetor ret;
  x++; y++;
  ret.x = x; ret.y = y;
  return (ret);
}

Vetor Vetor::operator++(int a){
  Vetor ret;
  ret.x = x; ret.y = y;
  x++; y++;
  return (ret);
}
*/
#endif // VETOR_H
