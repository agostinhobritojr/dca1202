#ifndef COLOR_H
#define COLOR_H


class Color{
private:
  float r, g, b;
public:
  Color(float mr=0, float mg=0, float mb=0);
  Color combina(Color c1);
  bool compara(Color c1);
  void print();
};

#endif // COLOR_H
