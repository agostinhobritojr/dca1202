#include "plotter.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QColor>
#include <cmath>

#define PI 3.1415

Plotter::Plotter(QWidget *parent) :
  QWidget(parent)
{

}

void Plotter::paintEvent(QPaintEvent *event)
{
  QPainter painter(this);
  QBrush brush;
  QPen pen;

  painter.setRenderHint(QPainter::Antialiasing);

  brush.setColor(QColor(255,255,220));
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
    y = sin(x);
    px = i;
    py = height()/2 - y*height()/2;
    painter.drawLine(pxold, pyold, px, py);
    pxold = px;
    pyold = py;
  }

  painter.drawLine(0,0, width()/7, height());

}

