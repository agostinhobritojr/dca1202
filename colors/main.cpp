#include <iostream>

#include "colors.h"

using namespace std;

int main()
{
  Color a(255,0,0), b(0,255, 0), c, d;
  c = a+b;
  a.print();
  b.print();
  c.print();
  d = c - a;
  d.print();
 // d = c-a;
//  d.print();
  if(d == b){
    cout << "dna positivo\n";
  }
}
