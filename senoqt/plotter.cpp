#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>

Plotter::Plotter(QWidget *parent) :
  QWidget(parent)
{

}

void Plotter::paintEvent(QPaintEvent *event)
{
  QPainter painter(this);
  QBrush brush;
  QPen pen;

  brush.setColor(QColor(255,255,0));
  brush.setStyle(Qt::SolidPattern);

  pen.setColor(QColor(255,0,0));
  pen.setWidth(2);

  painter.setBrush(brush);
  painter.setPen(pen);
  painter.drawRect(0,0,width(), height());
}















