#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QColor>

Plotter::Plotter(QWidget *parent) :
  QWidget(parent)
{

}

void Plotter::paintEvent(QPaintEvent *e)
{
  QPainter painter(this);
  QBrush brush;
  QPen pen;

  brush.setColor(QColor(255,255,200));
  brush.setStyle(Qt::SolidPattern);

  pen.setColor(QColor(255,0,0));
  pen.setWidth(3);

  painter.setBrush(brush);
  painter.setPen(pen);

  // desenha o fundo do plotter
  painter.drawRect(0,0,width(), height());

  // desenha a reta horizontal
  painter.drawLine(0,height()/2,width(),height()/2);

  // desenha o grid
  pen.setColor(QColor(200,200,0));
  pen.setWidth(1);
  pen.setStyle(Qt::DashLine);
  painter.setPen(pen);

  for(int i=width()/6; i<5*width()/6; i+=width()/6){
    painter.drawLine(i,0,i,height());
  }
}




