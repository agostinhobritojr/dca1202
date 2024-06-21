#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>

class Plotter : public QWidget
{
    Q_OBJECT
private:
    float teta;
    float amplitude;
    float frequencia;
    float velocidade;
public:
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
signals:
public slots:
    void mudaAmplitude(int amp);
    void mudaFrequencia(int freq);
    void mudaVelocidade(int vel);
};

#endif // PLOTTER_H
