#ifndef EQUIPAMENTO_H
#define EQUIPAMENTO_H

class Equipamento{
private:
    char nome[100];
    char fabricante[100];
    // interfaces protected sao aquelas que tem
    // acesso direto pelos membros da classe e
    // de QUALQUER subclasse e subclasse de subclasse...
protected:
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
