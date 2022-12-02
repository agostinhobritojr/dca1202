#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>

class Plotter : public QWidget
{
  Q_OBJECT
private:
  float A, freq, teta, veloc;

public:
  explicit Plotter(QWidget *parent = nullptr);
  void paintEvent(QPaintEvent *event);
  void timerEvent(QTimerEvent *event);
  void mousePressEvent(QMouseEvent *event);
  void mouseMoveEvent(QMouseEvent *event);

public slots:
  void mudaAmplitude(int A);
  void mudaFrequencia(int freq);
  void mudaVelocidade(int veloc);
signals:
  void mudaX(int);
  void mudaY(int);
};

#endif // PLOTTER_H








