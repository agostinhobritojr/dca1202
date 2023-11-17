#include "plotter.h"
#include <QBrush>
#include <QPen>
#include <QPainter>
#include <QDebug>
#include <QMouseEvent>

Plotter::Plotter(QWidget *parent)
    : QWidget{parent}{
    amp = 1;
    freq = 1;
    veloc = 0;
    teta = 0;
    rPlot = 0; gPlot = 155; bPlot = 0;
    // inicia o temporizador ciclico
    startTimer(10);
}

void Plotter::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    // prepara a caneta do contorno
    pen.setColor(QColor(255,0,0));

    // prepara o pincel de preenchimento
    brush.setColor(QColor(255,255,200));
    brush.setStyle(Qt::SolidPattern);

    // entrega caneta e pincel ao pintor
    painter.setPen(pen);
    painter.setBrush(brush);

    // desenha o plano (fundo do osciloscopio)
    painter.drawRect(0,0, width()-1, height()-1);
    pen.setColor(QColor(0,0,255));
    painter.setPen(pen);
    painter.drawLine(0, height()/2, width(), height()/2);

    // traca a senoide
    float t1, t2, y1, y2;
   // teta = veloc*0.05;
    t1 = 0; y1 = 0;
    // muda a cor do tracado para verde
    pen.setColor(QColor(rPlot,gPlot,bPlot));
    pen.setWidth(2);
    painter.setPen(pen);
    // desenha a senoide
    for(int i=0; i<width(); i++){
        // calcula o tempo seguinte
        t2 = i;
        // calcula o seno
        y2 = amp*sin(2*3.14*freq*t2/width()+teta);
        painter.drawLine(t1,
                         -y1*height()/2+height()/2,
                         t2,
                         -y2*height()/2+height()/2);
        t1 = t2;
        y1 = y2;
    }
}

void Plotter::timerEvent(QTimerEvent *e){
 //   qDebug() << "click!";
    teta = teta + 0.01*veloc;
    repaint();
}

void Plotter::mousePressEvent(QMouseEvent *e)
{
    qDebug() << e->x() << " " << e->y();
    emit mudaXY(e->x(), e->y());
}

void Plotter::mudaAmplitude(int amp){
    this->amp = amp/100.0;
  //  qDebug() << amp;
    // redesenha a tela
    repaint();
}

void Plotter::mudaFrequencia(int freq){
    this->freq = freq;
    repaint();
}

void Plotter::mudaVelocidade(int veloc)
{
    this->veloc = veloc;
    repaint();
}

void Plotter::mudaCorPlot(int r, int g, int b){
    rPlot = r; gPlot = g; bPlot = b;
    repaint();
}















