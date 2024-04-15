#include "vetor2d.h"
#include <iostream>
#include <cmath>

// metodo setX() no ESCOPO da classe Veto2d
/*Vetor2d::Vetor2d(){
    std::cout << "construtor\n";
    x = y = 0;
}*/

Vetor2d::Vetor2d(float x_, float y_){
    std::cout << "construtor com argumentos\n";
    x = x_; y = y_;
}

Vetor2d::~Vetor2d(){
    std::cout << "destrutor\n";
}

Vetor2d Vetor2d::soma(Vetor2d v1){
    Vetor2d ret;
    ret.x = x + v1.x;
    ret.y = y + v1.y;
    return ret;
}

/*
Vetor2d::Vetor2d(int a, int b)
{
    std::cout << "a= " << a << "; b = " << b << "\n";
}

Vetor2d::Vetor2d(float x_){
    x = y = x_;
}*/

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


