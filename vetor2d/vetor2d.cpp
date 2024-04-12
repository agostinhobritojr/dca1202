#include "vetor2d.h"
#include <iostream>
#include <cmath>

// metodo setX() no ESCOPO da classe Veto2d
void Vetor2d::setX(float x_){
    x = x_;
}

float Vetor2d::getX(){
    return x;
}

void Vetor2d::setY(float y_){
    y = y_;
}

float Vetor2d::getY(){
    return y;
}

float Vetor2d::norma(){
    return std::sqrt(x*x+y*y);
}

float Vetor2d::angulo(){
    return std::atan2(y,x)*180/M_PI;
}

void Vetor2d::print(){
    std::cout << "(" << x <<
        ", " << y << ")\n";
}


