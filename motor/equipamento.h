#ifndef EQUIPAMENTO_H
#define EQUIPAMENTO_H

class Equipamento{
  // acessiveis somente pelos metodos da
  // PROPRIA CLASSE
private:
  char nome[100];
  char fabricante[100];
  // acessiveis somente pelos metodos da
  // PROPRIA CLASSE E DAS CLASSES HERDEIRAS
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
