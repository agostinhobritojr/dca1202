#ifndef EQUIPAMENTO_H
#define EQUIPAMENTO_H

class Equipamento{
  // intefaces protected permitem
  // que as subclasses acessem as
  // propriedades definidas sob
  // essa tutela
protected:
  char nome[100];
  char fabricante[100];
  float preco;
public:
  void setNome(const char *_nome);
  void setFabricante(const char *_fabricante);
  void setPreco(float _preco);
  char* getNome(void);
  char* getFabricante(void);
  float getPreco(void);
};

#endif // EQUIPAMENTO_H
