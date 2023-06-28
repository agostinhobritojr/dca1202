#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <QColor>

class Plotter : public QWidget
{
    Q_OBJECT
private:
    float amplitude;
    float teta;
    float frequencia;
    float velocidade;
    QColor background;
public:
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void setColor(int r, int g, int b);
    int getR();
    int getG();
    int getB();

public slots:
    void mudaAmplitude(int);
    void mudaFrequencia(int);
    void mudaVelocidade(int);
signals:
    void mudaX(int);
    void mudaY(int);
};

#endif // PLOTTER_H
