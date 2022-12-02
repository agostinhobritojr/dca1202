#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <cmath>
#include <QDebug>
#include <QMouseEvent>

Plotter::Plotter(QWidget *parent) :
  QWidget(parent){
  A = 1.0;
  freq = 1;
  teta = 0;
  veloc = 0;
  startTimer(10);
  setMouseTracking(true);
}

void Plotter::paintEvent(QPaintEvent *event)
{
  QPainter painter(this);
  QBrush brush;
  QPen pen;
  int nhoriz=10, nvert=10;

  painter.setRenderHint(QPainter::Antialiasing);

  brush.setColor(QColor(255,255,200));
  brush.setStyle(Qt::SolidPattern);

  pen.setColor(QColor(255,0,0));
  pen.setWidth(2);

  painter.setBrush(brush);
  painter.setPen(pen);
  painter.drawRect(0,0,width(), height());

  pen.setColor(QColor(255,200,200));

  painter.drawLine(0,height()/2,
                   width(), height()/2);

  pen.setWidth(1);

  painter.setPen(pen);
  for(int i=0; i<nhoriz; i++){
    painter.drawLine(0, i*height()/nhoriz,
                     width(), i*height()/nhoriz);
  }
  for(int i=0; i<nvert; i++){
    painter.drawLine(i*width()/nvert, 0,
                     i*width()/nvert,
                     height());
  }

  float t1, t2, y1, y2;

  pen.setColor(QColor(0,0,255));
  painter.setPen(pen);

  // qDebug() << y1 << y2;

  for(int i=0; i<width()-1; i++){
    t1 = (float)i/width();
    t2 = (float)(i+1)/width();
    y1 = A*height()/2*std::sin(2*3.14*freq*t1 + teta);
    y2 = A*height()/2*std::sin(2*3.14*freq*t2 + teta);
    painter.drawLine(t1*width(), height()/2-y1,
                     t2*width(), height()/2-y2);
  }
}

void Plotter::timerEvent(QTimerEvent *event){
  teta = teta + veloc;
  repaint();
}

void Plotter::mousePressEvent(QMouseEvent *event)
{
  //qDebug() << event->x() << event->y();
  emit mudaX(event->x());
  emit mudaY(event->y());
}

void Plotter::mouseMoveEvent(QMouseEvent *event)
{
  emit mudaX(event->x());
  emit mudaY(event->y());
}



void Plotter::mudaAmplitude(int A){
  this->A = (float)A/100.0;
  repaint();
}

void Plotter::mudaFrequencia(int freq)
{
  this->freq = freq;
  repaint();
}

void Plotter::mudaVelocidade(int veloc)
{
  this->veloc = (float)veloc/1000.0;
  repaint();
}




























