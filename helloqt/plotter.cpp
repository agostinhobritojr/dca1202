#include "plotter.h"
#include <QPainter>
#include <QPen>
#include <QBrush>

Plotter::Plotter(QWidget *parent) : QWidget(parent)
{

}

void Plotter::paintEvent(QPaintEvent *event){
  QPainter painter(this);
  QPen pen;
  QBrush brush;

  pen.setColor(QColor(255,0,0));
  brush.setColor(QColor(255,255,0));
  brush.setStyle(Qt::SolidPattern);

  painter.setPen(pen);
  painter.setBrush(brush);

  painter.drawRect(0,0,width()-2,height()-2);

}





