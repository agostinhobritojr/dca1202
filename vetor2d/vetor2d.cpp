#include "vetor2d.h"
#include <iostream>
#include <cmath>
#include <values.h>

/*
Vetor2d::Vetor2d(){
  std::cout << "construtor\n";
  x = y = 0;
}*/

Vetor2d::Vetor2d(float x_, float y_){
  std::cout << "construtor com argumentos\n";
  x=x_; y=y_;
}

Vetor2d::Vetor2d(Vetor2d &v)
{
  x = v.x;
  y = v.y;
  std::cout << "construtor copia\n";
}

/*
Vetor2d::Vetor2d(float xy_)
{
  x = y = xy_;
}*/

Vetor2d::~Vetor2d(){
  std::cout << "destrutor\n";
}

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

void Vetor2d::print()
{
  std::cout << "(" << x << "," << y << ")";
}

float Vetor2d::angulo()
{
  float ang;
  ang = std::atan2(y,x);
  return (ang * 180/M_PI); //values.h
}

Vetor2d Vetor2d::produto(float a){
  Vetor2d ret;
  ret.x = x * a;
  ret.y = y * a;
  return ret;
}

// chamada do construtor de copia
float Vetor2d::produto(Vetor2d v2){
  float ret;
  ret = x * v2.x + y + v2.y;
  return ret;
}












