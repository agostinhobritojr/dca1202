#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>

class Plotter : public QWidget
{
    Q_OBJECT
private:
    float amp;
    float freq;
    float veloc;
    float teta;
    int rPlot, gPlot, bPlot;
public:
    explicit Plotter(QWidget *parent = nullptr);

public slots:
    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *e);
    void mousePressEvent(QMouseEvent *e);

    void mudaAmplitude(int amp);
    void mudaFrequencia(int freq);
    void mudaVelocidade(int veloc);

public:
    void mudaCorPlot(int r, int g, int b);
signals:
    void mudaXY(int, int);
};

#endif // PLOTTER_H
