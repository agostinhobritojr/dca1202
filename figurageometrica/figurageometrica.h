#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

/**
 * @brief A classe FiguraGeometrica
 * serve como classe abstrata para
 * criacao de outras figuras.
 * @details FiguraGeometrica implementa
 * um conceito chamado de classe abstrata
 * em C++. Permite que endereços de
 * objetos de classes derivadas dela sejam
 * armazenados em ponteiros dessa classe.
 */
class FiguraGeometrica{
public:
  /**
   * @brief FiguraGeometrica eh o construtor
   * da classe
   */
  FiguraGeometrica();
  // declara-se o metodo draw
  // como um funcao-membro virtual PURA
  // colocando "=0" apos o seu prototipo
  // antes do ";"
  /**
   * @brief draw eh um metodo virtual puro
   * que deve ser reimplementado nas classes
   * derivadas
   */
  virtual void draw()=0;
  // destrutores virtuais devem
  // OBRIGATORIAMENTE ser implementados
  // em classes que servirão de base
  // para outras classes
  /**
   * @brief ~FiguraGeometrica eh o destrutor
   * virtual. Deve ser implementado para
   * que os destrutores sejam chamados para
   * cada uma das classes derivadas
   */
  virtual ~FiguraGeometrica();
};

#endif // FIGURAGEOMETRICA_H









