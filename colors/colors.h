#ifndef COLORS_H
#define COLORS_H

class Color{
  float r,g,b; // cores no intervalo 0-255
public:// construtor da classe
  // guarda o estado inicial do objeto
  Color(float _r=0, float _g=0, float _b=0);
  // retorna um novo individuo de cor igual aa media
  // da sua cor com a cor passada como parametro
  Color operator+(Color c);
  // se for fornecido um dos pais do individuo
  // a funcao separa a cor do outro parental
  Color operator-(Color c);
  // retorna ‘‘1’’ se o individuo c possui cor igual
  // ao proprio objeto, e ‘‘0’’, caso contrario
  int operator==(Color c);
  // Mostra os valores de vermelho, verde e azul da cor.
  void print();
};
#endif // COLORS_H
