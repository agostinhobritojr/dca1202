#include <iostream>
#include "colors.h"

using namespace std;

int main(void){
  Color a(255,0,0), b(0,120, 121), c, d;
  c = a+b;
  d = c-a;
  d.print();
  if(d == b){
    cout << "Fail! DNA positivo: b eh pai de c!\n";
  }
  else{
    cout << "Ufa! que alivio!";
  }
}
