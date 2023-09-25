#include "vetor2d.h"
#include <cmath>
#include <iostream>

//Vetor2d::Vetor2d(){
//    std::cout << "Construtor padraao\n";
//    x = y = 1;
//}

Vetor2d::Vetor2d(float x_, float y_) :
    x(x_), y(y_){
    std::cout << "Construtor c/ argumentos\n";
    //    x = x_; y = y_;
}

// Vetor2d a, b(3,4)
// a.produto(b);
// float Vetor2d::produto(Vetor2d v1);
// b eh copiada para o vetor v1 usando o
// construtor de copia
// v1.x recebe uma copia de b.x
// v1.y recebe uma copia de b.y
Vetor2d::Vetor2d(const Vetor2d &copia){
    std::cout << "Construtor de cohpia\n";
    x = copia.x;
    y = copia.y;
}

Vetor2d::~Vetor2d(){
    std::cout << "Destrutor\n";
}

//Vetor2d::Vetor2d(float xy) : x(xy), y(xy){
  //  x = y = xy;
//}

void Vetor2d::setX(float x){
    // diferencia a variavel de classe
    // "this->x" da variavel local "x"
    this->x = x;
}

float Vetor2d::getX(void){
    return x;
}
void Vetor2d::setY(float y_){
    y = y_;
}
float Vetor2d::getY(void){
    return y;
}

void Vetor2d::print(){
    std::cout << "(" << x << "," << y << ")";
}
float Vetor2d::norma(){
    return std::sqrt(x*x + y*y);
}
float Vetor2d::angulo(){
    return std::atan2(y, x)*180/3.1415;
}

Vetor2d Vetor2d::unitario(){
    Vetor2d ret;
    float tamanho;
    tamanho = norma();
    ret.x = x /tamanho;
    ret.y = y /tamanho;
    return ret;
}

Vetor2d Vetor2d::soma(Vetor2d v1){
    Vetor2d ret;
    ret.x = x+v1.x;
    ret.y = y+v1.y;
    return ret;
}

Vetor2d Vetor2d::produto(float a){
    Vetor2d ret;
    ret.x = x * a;
    ret.y = y * a;
    return ret;
}

float Vetor2d::produto(Vetor2d v1){
    float ret;
    ret = x*v1.x+y*v1.y;
    return ret;
}






