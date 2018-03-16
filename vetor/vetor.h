#ifndef VETOR_H
#define VETOR_H

class Vetor{
  // variaveis e metodos privados
  // interfaces privadas
private:
  float x, y;
  // interfaces publicas
public:
  float z;
  void setX(float _x);
  float getX(void);
  void setY(float _y);
  float getY(void);
  float norma();
  float teta();
  void print(void);
  void negativo(void);
  void negativo(int mode);

  /* erro!!! o codigo nao pode ser declarado fora de um
   * método
  for(int i=0; i<3; i++){
    cout << "alo";
  }
  */
}; // <======= ATENCAO AO ";"

#endif // VETOR_H
