// diretiva de compilacao condicional
#ifndef VETOR_H
#define VETOR_H

class Vetor{
private:
  float y;
  float x;
public:
  // funcoes-membro ou metodos
  // funcao construtor
  // construtor default
 // Vetor();

  // construtor com argumentos
  Vetor(float mx=0, float my=0);
//  Vetor(float mxy);

  // construtor de copia
  // &v referencia para v
  Vetor(const Vetor& v);

  ~Vetor();

  void setX(float mx);
  float getX(void);
  void setY(float my);
  float getY(void);
  float tamanho(void);
  float angulo(void);
  Vetor unitario(void);
  void print(void);
  float escalar(Vetor v2);
  Vetor soma(Vetor v2);

  Vetor operator + (Vetor v2);
  Vetor operator* (float a);
  float operator* (Vetor v2);

  /*
   *  C++ deliberately specifies that binding a temporary
   * object to a reference to const on the stack lengthens
   * the lifetime of the temporary to the lifetime of the
   * reference itself, and thus avoids what would otherwise
   * be a common dangling-reference error. In the example above,
   * the temporary returned by foo() lives until the closing
   * curly brace. (Sergey K. - Stackoverflow)
   */
  friend Vetor operator- (const Vetor &v1,const Vetor &v2);

  Vetor operator++(int);
  Vetor operator++(void);

  Vetor soma(float a);
  // funcao amiga
  friend Vetor operator*(float a, Vetor v2);
};

//Vetor operator*(float a, Vetor v2);

#endif // VETOR_H




