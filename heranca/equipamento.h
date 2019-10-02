#ifndef EQUIPAMENTO_H
#define EQUIPAMENTO_H

class Equipamento{
private:
  char nome[100];
  char fabricante[100];
  // variaveis declaradas em interfaces
  // protegidas podem ser acessiveis apenas
  // pela classe e pelas suas herdeiras
protected:
  float preco;
public:
  Equipamento();
  Equipamento(float _preco);
  ~Equipamento();
  void setNome(const char *_nome);
  void setFabricante(const char *_fabricante);
  void setPreco(float _preco);
  char* getNome(void);
  char* getFabricante(void);
  float getPreco(void);
};

#endif // EQUIPAMENTO_H
