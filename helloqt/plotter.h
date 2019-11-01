#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>

class Plotter : public QWidget
{
  Q_OBJECT
private:
  float amplitude;
  float frequencia;
  float teta;
  float velocidade;
  int timerid;

public:
  explicit Plotter(QWidget *parent = nullptr);
  void paintEvent(QPaintEvent *event);
  void timerEvent(QTimerEvent *event);
  void mousePressEvent(QMouseEvent *event);

signals:
  void mouseX(int);
  void mouseY(int);

public slots:
  void mudaAmplitude(int valor);
  void mudaFrequencia(int valor);
  void mudaVelocidade(int vel);
  void mudaTemporizador();
};

#endif // PLOTTER_H
