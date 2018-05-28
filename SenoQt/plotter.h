#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>

class Plotter : public QWidget
{
  Q_OBJECT
private:
  int amplitude, frequencia;
  float angulo, velocidade;
  int r, g, b;
public:
  explicit Plotter(QWidget *parent = nullptr);
  void paintEvent(QPaintEvent *event);
//  void setCorDeFundo(int r, int g, int b);
  void timerEvent(QTimerEvent *event);
  void mousePressEvent(QMouseEvent *event);
  void mouseMoveEvent(QMouseEvent *event);
  void setRGB(int _r, int _g, int _b);
signals:
  int mudaX(int);
  int mudaY(int);
public slots:
  void mudaAmplitude(int _amplitude);
  void mudaFrequencia(int _frequencia);
  void mudaVelocidade(int _velocidade);
};

#endif // PLOTTER_H




