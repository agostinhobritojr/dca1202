#ifndef VEICULO_H
#define VEICULO_H

class Veiculo{
private:
  char fabricante[41];
  int rodas;
  int massa;
  int velocidade;
  int velocidadeMaxima;
public:
  Veiculo();
  void setFabricante(char * _nome);
  void setVelMax(int _velmax);
  char* getFabricante(void);
  int getVelocidade(void);
  void acelerar(void);
  void frear(void);
};

#endif // VEICULO_H
