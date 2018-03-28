#ifndef COLORS_H
#define COLORS_H

class Color{
  float r,g,b;
public:
  Color(float _r=0, float _g=0, float _b=0);
  Color operator+(Color c);
  Color operator-(Color c);
  bool operator==(Color c);
  void print();
};

#endif // COLORS_H
