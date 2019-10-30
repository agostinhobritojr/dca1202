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

public:
  explicit Plotter(QWidget *parent = nullptr);
  void paintEvent(QPaintEvent *event);

signals:

public slots:
  void mudaAmplitude(int valor);
  void mudaFrequencia(int valor);
};

#endif // PLOTTER_H
