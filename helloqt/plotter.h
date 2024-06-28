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
    int fundoR, fundoG, fundoB;
public:
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
signals:
    void mudaX(int);
    void mudaY(int);
public slots:
    void mudaAmplitude(int amp);
    void mudaFrequencia(int freq);
    void mudaVelocidade(int vel);
    void mudaFundo(int r, int g, int b);
};

#endif // PLOTTER_H
