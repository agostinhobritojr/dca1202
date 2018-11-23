#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>

class Plotter : public QWidget
{
  Q_OBJECT
private:
  float amplitude;
  float frequencia;
  float angulo;
  float velocidade;
  int temporizador;
  bool animando;
  int rfundo, gfundo, bfundo;
public:
  explicit Plotter(QWidget *parent = nullptr);
  void paintEvent(QPaintEvent *event);  
  void timerEvent(QTimerEvent *event);
  void mousePressEvent(QMouseEvent *event);
  void mouseMoveEvent(QMouseEvent *event);
  void setCorFundo(int r, int g, int b);

signals:
  void clickX(int);
  void clickY(int);
  void moveX(int);
  void moveY(int);

public slots:
  void mudaAmplitude(int amp);
  void mudaFrequencia(int freq);
  void mudaVelocidade(int vel);
  void anima();
};

#endif // PLOTTER_H
