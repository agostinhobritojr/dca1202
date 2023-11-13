#include "plotter.h"
#include <QBrush>
#include <QPen>
#include <QPainter>
#include <QDebug>

Plotter::Plotter(QWidget *parent)
    : QWidget{parent}{

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
    float teta=0, freq=1;
    t1 = 0; y1 = 0;
    // muda a cor do tracado para verde
    pen.setColor(QColor(0,155,0));
    painter.setPen(pen);
    // desenha a senoide
    for(int i=0; i<width(); i++){
        // calcula o tempo seguinte
        t2 = t1 + (float)i/width();
        // calcula o seno
        y2 = amplitude*sin(2*3.14*freq*t2+teta);
        painter.drawLine(t1*width(),
                         -y1*height()/2+height()/2,
                         t2*width(),
                         -y2*height()/2+height()/2);
        t1 = t2;
        y1 = y2;
    }
}

void Plotter::mudaAmplitude(int amp){
    amplitude = amp/100.0;
  //  qDebug() << amp;
    // redesenha a tela
    repaint();
}















