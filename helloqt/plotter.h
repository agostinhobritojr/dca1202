#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>

class Plotter : public QWidget
{
  Q_OBJECT
private:
  float ampl, freq, vel;
  float teta;
  int timerId;
public:
  explicit Plotter(QWidget *parent = nullptr);
  void paintEvent(QPaintEvent *event);
  void timerEvent(QTimerEvent *event);
signals:

public slots:
  void mudaAmplitude(int a);
  void mudaFrequencia(int f);
};

#endif // PLOTTER_H



