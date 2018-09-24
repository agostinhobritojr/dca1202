#ifndef EQUIPAMENTO_H
#define EQUIPAMENTO_H

/**
 * @brief The Equipamento class serve para
 * estabelecer informações básicas de um
 * tipo comum chamado equipamento
 */
class Equipamento{
private:
  char nome[100];
  char fabricante[100];
  // variaveis ou metodos protected
  // podem ser alteradas apenas pela
  // propria classe e pelas suas herdeiras
protected:
  float preco;
public:
  /**
   * @brief Equipamento é o construtor da
   * classe
   *
   */
  Equipamento();
  /**
   * @brief Equipamento é um construtor com
   * argumentos da classe
   * @param _preco é o valor inicial do preço
   * que se deseja atribuir ao dispositivo
   */
  Equipamento(float _preco);
  ~Equipamento();
  void setNome(const char *_nome);
  void setFabricante(const char *_fabricante);
  /**
   * @brief setPreco bla bla
   * @param _preco bla bla
   * <ul>
   * <li> Um item</li>
   * <li> Dois itens</li>
   * </ul>
   *
   * * Um item
   * * Dois itens
   *
   * 1. Um item
   * 2. Dois itens
   *
   * \f$ f(x) = \int_a^b \sin(x) dx \f$
   */
  void setPreco(float _preco);
  /**
   * @brief getNome devolve um ponteiro
   * para o nome do fabricante
   * @return o ponteiro para o nome do
   * fabricante
   * <pre>
   * int main(void){
   *    Equipamento e;
   *    cout << e.getNome();
   * }
   * </pre>
   */
  char* getNome(void);
  char* getFabricante(void);
  float getPreco(void);
};

#endif // EQUIPAMENTO_H
