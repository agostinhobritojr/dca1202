#include "color.h"
#include <iostream>

using namespace std;

Color::Color(float mr, float mg, float mb){
r=mr; g=mg; b=mb;
}

Color Color::combina(Color c1){
  Color ret;
  ret.r = (r+c1.r)/2;
  ret.g = (g+c1.g)/2;
  ret.b = (b+c1.b)/2;
  return ret;
}

bool Color::compara(Color c1){
  if(r == c1.r && g == c1.g
     && b == c1.b){
    return true;
  }
  else {
    return false;
  }
}

void Color::print(){
  cout << "(" << r << ", " <<
          g << ", " << b << ")\n";
}




