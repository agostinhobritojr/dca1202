#include "colors.h"
#include <iostream>

using namespace std;

Color::Color(float _r, float _g, float _b) :
  r(_r), g(_g), b(_b){
  //  r=_r; g=_g; b=_b;
}

Color Color::operator+(Color c){
  Color ret;
  ret.r = (r+c.r)/2;
  ret.g = (g+c.g)/2;
  ret.b = (b+c.b)/2;
  return ret;
}

Color Color::operator-(Color c){
  Color ret;
  ret.r = 2*r - c.r;
  ret.g = 2*g - c.g;
  ret.b = 2*b - c.b;
  return ret;
}

int Color::operator ==(Color c){
  if(r == c.r && g == c.g && b == c.b){
    return 1;
  }
  else{
    return 0;
  }
}

void Color::print(){
  cout << "(" << r << ","
       << g << "," << b << ")\n";
}












