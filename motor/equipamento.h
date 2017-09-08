#ifndef EQUIPAMENTO_H
#define EQUIPAMENTO_H

class Equipamento{
  char nome[100];
  char fabricante[100];
  float preco;

public:
  Equipamento();
  void setNome(const char *_nome);
  void setFabricante(const char *_fabricante);
  void setPreco(float _preco);
  char* getNome(void);
  char* getFabricante(void);
  float getPreco(void);
};

#endif // EQUIPAMENTO_H
