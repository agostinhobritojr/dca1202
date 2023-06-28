#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <cmath>
#include <QDebug> //qDebug()
#include <QMouseEvent>

Plotter::Plotter(QWidget *parent)
    : QWidget{parent}{
    frequencia = 1;
    amplitude = 1;
    teta = 0;
    velocidade = 0;
    background = QColor(255,255,200);
    startTimer(5);
    setMouseTracking(true); // para rastrear o mouse
}

void Plotter::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QPen pen;
    QBrush brush;

    painter.setRenderHint(QPainter::Antialiasing);
    // cor da caneta
    pen.setColor(QColor(0,0,255));
    // largura do traco
    pen.setWidth(2);
    // entrega a caneta ao pintor
    painter.setPen(pen);

    // cor do pincel
    brush.setColor(background);
    // estilo de pintura (solido)
    brush.setStyle(Qt::SolidPattern);
    // entrega o pincel ao pintor
    painter.setBrush(brush);

    // desenha o retangulo
    painter.drawRect(0,0,width(), height());

    // muda a cor da caneta
    pen.setColor(Qt::red);
    // muda a largura do traco
    pen.setWidth(1);
    // atualiza o pincel com o pintor
    painter.setPen(pen);
    // desenha a linha
    painter.drawLine(0, height()/2, width(), height()/2);

    // cria a funcao do seno
    int x1, x2, y1, y2;

    pen.setColor(Qt::darkCyan);
    pen.setWidth(2);
    painter.setPen(pen);

    x1 = 0; y1 = amplitude*sin(teta);
    for(int x2=1; x2<width(); x2++){
        y2 = height()/2-amplitude*sin(2*3.14*frequencia*x2/width()
                             +teta)*height()/2;
        painter.drawLine(x1,y1,x2,y2);
        x1 = x2; y1 = y2;
    }

}

void Plotter::mudaAmplitude(int amp){
    amplitude = amp/99.0;
    repaint();
}

void Plotter::mudaFrequencia(int freq){
    frequencia = freq;
    repaint();
}

void Plotter::timerEvent(QTimerEvent *event){
    teta = teta + velocidade;
    repaint();
}

void Plotter::mousePressEvent(QMouseEvent *event){
   // qDebug() << event->x();
   // qDebug() << event->y();
    emit mudaX(event->x());
    emit mudaY(event->y()-height()/2);
}

void Plotter::mouseMoveEvent(QMouseEvent *event){
    emit mudaX(event->x());
    emit mudaY(event->y()-height()/2);
}

void Plotter::setColor(int r, int g, int b){
    background.setRed(r);
    background.setGreen(g);
    background.setBlue(b);
    repaint();
}

int Plotter::getR(){
    return background.red();
}

int Plotter::getG(){
    return background.green();
}

int Plotter::getB(){
    return background.blue();
}

void Plotter::mudaVelocidade(int vel){
    velocidade = 0.1*vel/99.0;
    repaint();
}







