#include "plotter.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QColor>
#include <cmath>
#include <QDebug>
#include <QMouseEvent>

#define PI 3.1415

Plotter::Plotter(QWidget *parent) :
  QWidget(parent)
{
  amplitude = 0;
  frequencia = 1;
  angulo = 0;
  velocidade = 0;
  temporizador = startTimer(10);
  animando = true;
  rfundo=255;
  gfundo=255;
  bfundo=220;
  // habilita o rastreio da posicao do mouse
  setMouseTracking(true);
}

void Plotter::timerEvent(QTimerEvent *event){
  angulo = angulo + velocidade;
  repaint();
}

void Plotter::mousePressEvent(QMouseEvent *event)
{
//  qDebug() << event->x() << event->y();
  emit clickX(event->x());
  emit clickY(event->y());
}

void Plotter::mouseMoveEvent(QMouseEvent *event)
{
  emit moveX(event->x());
  emit moveY(event->y());
}

void Plotter::setCorFundo(int r, int g, int b)
{
  rfundo = r;
  gfundo = g;
  bfundo = b;
  repaint();
}

void Plotter::paintEvent(QPaintEvent *event)
{
  QPainter painter(this);
  QBrush brush;
  QPen pen;

  painter.setRenderHint(QPainter::Antialiasing);

  brush.setColor(QColor(rfundo, gfundo, bfundo));
  brush.setStyle(Qt::SolidPattern);
  painter.setBrush(brush);

  pen.setColor(QColor(255,0,0));
  pen.setWidth(2);
  painter.setPen(pen);

  painter.drawRect(0,0,width(), height());

  pen.setWidth(1);
  pen.setColor(QColor(200,200,0));
  pen.setStyle(Qt::DashLine);
  painter.setPen(pen);

  for(int i=width()/5; i<width(); i=i+width()/5){
    painter.drawLine(i, 0, i, height());
  }

  for(int i=height()/5; i<height(); i=i+height()/5){
    painter.drawLine(0, i, width(), i);
  }

  pen.setWidth(2);
  pen.setColor(QColor(0,0,200));
  pen.setStyle(Qt::SolidLine);
  painter.setPen(pen);

  painter.drawLine(0,height()/2, width(), height()/2);

  // desenha o seno

  float x;
  float y;
  int px, py, pxold, pyold;
  pxold = 0;
  pyold = height()/2;

  pen.setWidth(2);
  pen.setColor(QColor(0,200,0));
  painter.setPen(pen);
  for(int i=0; i<width(); i++){
    x = (float)i*2*PI/width();
    y = amplitude*sin(frequencia*x+angulo);
    px = i;
    py = height()/2 - y*height()/2;
    painter.drawLine(pxold, pyold, px, py);
    pxold = px;
    pyold = py;
  }

//  painter.drawLine(0,0, width()/7, height());

}

void Plotter::mudaAmplitude(int amp){
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
  velocidade = vel/100.0;
  //  repaint();
}

void Plotter::anima()
{
  if(animando){
    killTimer(temporizador);
    animando = false;
  }
  else{
    temporizador = startTimer(10);
    animando = true;
  }
}

