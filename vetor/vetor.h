#ifndef VETOR_H
#define VETOR_H

class Vetor{
  // variaveis e metodos privados
  // interfaces privadas
private:
  float x, y;
  // interfaces publicas
public:
  // construtor default
  //Vetor();

  // construtor com argumentos
  //Vetor(float _x, float _y);

  // construtor com argumentos e valores
  // iniciais
  Vetor(float _x=0, float _y=0);

  // construtor de copia
  Vetor(Vetor &v);

  // destrutor
  ~Vetor();

  void setX(float _x);
  float getX(void);
  void setY(float _y);
  float getY(void);
  float norma();
  float teta();
  void print(void);
  void negativo(void);
  void negativo(int mode);
  Vetor soma(Vetor v);
  Vetor subtracao(Vetor v);
  Vetor multiplicacao(float a);
  float multiplicacao(Vetor v);
//  Vetor3d produtoVetorial(Vetor v);

  /* erro!!! o codigo nao pode ser declarado fora de um
   * método
  for(int i=0; i<3; i++){
    cout << "alo";
  }
  */
}; // <======= ATENCAO AO ";"

#endif // VETOR_H
