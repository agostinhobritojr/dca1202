#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <QColor>

class Plotter : public QWidget
{
  Q_OBJECT
private:
  float omega, amp, teta, veloc;
  QColor fundo;

public:
  explicit Plotter(QWidget *parent = 0);
  void paintEvent(QPaintEvent *e);
  void timerEvent(QTimerEvent *e);
  void setFundo(int r, int g, int b);

signals:

public slots:
  void setAmplitude(int _amp);
  void setOmega(int _omega);
  void setVelocidade(int _velocidade);
};

#endif // PLOTTER_H
