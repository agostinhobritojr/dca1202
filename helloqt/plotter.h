#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>

class Plotter : public QWidget
{
  Q_OBJECT
private:
  float amp, freq, angulo, velocidade;
public:
  explicit Plotter(QWidget *parent = 0);
  void paintEvent(QPaintEvent *e);
  void timerEvent(QTimerEvent *e);
signals:

public slots:
  void mudaVelocidade(int vel);
  void mudaFrequencia(int freq);
  void mudaAmplitude(int _amp);
};

#endif // PLOTTER_H
