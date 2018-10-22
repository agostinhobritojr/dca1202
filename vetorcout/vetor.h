#ifndef VETOR_H
#define VETOR_H
#include <iostream>

using namespace std;

class Vetor{
  int x, y;
public:
  Vetor(int _x=0, int _y=0);
  void print();
  friend ostream& operator << (ostream &os, Vetor &v);
  friend istream& operator >> (istream &is, Vetor &v);
};

#endif // VETOR_H
