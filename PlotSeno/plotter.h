#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>

class Plotter : public QWidget
{
  Q_OBJECT
private:
  float A, freq, teta;
public:
  explicit Plotter(QWidget *parent = nullptr);
  void paintEvent(QPaintEvent *event);
  void timerEvent(QTimerEvent *event);
  void mousePressEvent(QMouseEvent *event);
signals:
  void mudaxy(int, int);
public slots:
  void mudaAmplitude(int a);
};

#endif // PLOTTER_H





