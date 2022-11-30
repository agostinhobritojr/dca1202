#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <cmath>
#include <QDebug>

Plotter::Plotter(QWidget *parent) :
  QWidget(parent)
{

}

void Plotter::paintEvent(QPaintEvent *event)
{
  QPainter painter(this);
  QBrush brush;
  QPen pen;
  int nhoriz=10, nvert=10;

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

  float A, freq, teta;
  float t1, t2, y1, y2;

  pen.setColor(QColor(0,0,255));
  painter.setPen(pen);

  A = height()/4;
  freq = 1;
  teta = 0;
  // qDebug() << y1 << y2;

  for(int i=0; i<width()-1; i++){
    t1 = (float)i/width();
    t2 = (float)(i+1)/width();
    y1 = A*std::sin(2*3.14*freq*t1 + teta);
    y2 = A*std::sin(2*3.14*freq*t2 + teta);
    painter.drawLine(t1*width(), height()/2-y1,
                     t2*width(), height()/2-y2);
  }
}




























