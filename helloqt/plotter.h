#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <QAction>

class Plotter : public QWidget
{
  Q_OBJECT
private:
  float amplitude;
  float frequencia;
  float teta;
  float velocidade;
  int timerid;
  int backR, backG, backB;
  QAction actionMessage;

public:
  explicit Plotter(QWidget *parent = nullptr);
  void paintEvent(QPaintEvent *event);
  void timerEvent(QTimerEvent *event);
  void mousePressEvent(QMouseEvent *event);
  void mouseMoveEvent(QMouseEvent *event);
  void contextMenuEvent(QContextMenuEvent *event);

  void setBackgroundColor(int r, int g, int b);
signals:
  void mouseX(int);
  void mouseY(int);

public slots:
  void mudaAmplitude(int valor);
  void mudaFrequencia(int valor);
  void mudaVelocidade(int vel);
  void mudaTemporizador();
  void mostraMensagem();
};

#endif // PLOTTER_H
