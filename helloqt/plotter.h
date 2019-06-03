#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <QAction>
#include <QColor>

class Plotter : public QWidget
{
  Q_OBJECT
private:
  float ampl, freq, vel;
  float teta;
  int timerId;
  QColor lineColor;
  int cor;
  QAction *actionMudaCor;

public:
  explicit Plotter(QWidget *parent = nullptr);
  void paintEvent(QPaintEvent *event);
  void timerEvent(QTimerEvent *event);
  void mouseMoveEvent(QMouseEvent *event);
  void mousePressEvent(QMouseEvent *event);
  void contextMenuEvent(QContextMenuEvent *event);

signals:
  void moveX(int);
  void moveY(int);
  void clickX(int);
  void clickY(int);

public slots:
  void mudaAmplitude(int a);
  void mudaFrequencia(int f);
  void mudaVelocidade(int v);
  void mudaCor();
};

#endif // PLOTTER_H




