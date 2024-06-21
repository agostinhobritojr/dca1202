#include "plotter.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QDebug>
#include <QMouseEvent>

Plotter::Plotter(QWidget *parent)
    : QWidget{parent}
{
    teta = 0;
    amplitude = 1;
    frequencia = 1;
    velocidade = 0;
    startTimer(10);
 //   setMouseTracking(true);
}

void Plotter::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QBrush brush;
    QPen pen;
    painter.setRenderHint(QPainter::Antialiasing);
    brush.setColor(QColor(255,255,200));
    brush.setStyle(Qt::SolidPattern);
    pen.setColor(Qt::red);
    pen.setWidth(2);
    painter.setBrush(brush);
    painter.setPen(pen);
    // desenha o fundo do plotter
    painter.drawRect(0,0,width(), height());
    pen.setColor(QColor(200,200,0));

    // desenha o eixo x
    painter.setPen(pen);
    painter.drawLine(0,height()/2, width(), height()/2);

    // desenha o seno
    pen.setColor(Qt::blue);
    painter.setPen(pen);

    float x0, x1, y0, y1;

    x0 = 0;
    y0 = amplitude * sin(2*M_PI*frequencia*x0 + teta);
    for(int i=1; i<width(); i++){
        x1 = 2*M_PI*i/(float)width();
        y1 = amplitude * sin(2*M_PI*frequencia*x1 + teta);
        painter.drawLine(x0*width(),
                         height()/2 - y0*height()/2,
                         x1*width(),
                         height()/2 - y1*height()/2);
        x0 = x1;
        y0 = y1;
    }
}

void Plotter::timerEvent(QTimerEvent *event){
    teta = teta + velocidade;
    if(teta > 2*M_PI)
        teta = 0;
    repaint();
}

void Plotter::mousePressEvent(QMouseEvent *event){
    qDebug() << "press: " << event->x() << event->y();
}

void Plotter::mouseReleaseEvent(QMouseEvent *event){
    qDebug() << "release: " << event->x() << event->y();
}

void Plotter::mouseMoveEvent(QMouseEvent *event)
{
    qDebug() << "move: " << event->x() << event->y();
}

void Plotter::mudaAmplitude(int amp)
{
    amplitude = amp/100.0;
    repaint();
}

void Plotter::mudaFrequencia(int freq)
{
    frequencia = freq;
    repaint();
}

void Plotter::mudaVelocidade(int vel)
{
    velocidade = (float)vel/100;
    repaint();
}












