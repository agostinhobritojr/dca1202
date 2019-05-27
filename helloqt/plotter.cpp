#include "plotter.h"
#include <QPainter>
#include <QPen>
#include <QBrush>

Plotter::Plotter(QWidget *parent) :
    QWidget(parent)
{

}

void Plotter::paintEvent(QPaintEvent *event)
{
  QPainter p(this);
  QPen pen;
  QBrush brush;

  // preparando a caneta
  // R, G, B
  pen.setColor(QColor(255,0,0));
  pen.setWidth(2);
  // entregando a caneta ao pintor
  p.setPen(pen);

  // preparando o pincel
  brush.setColor(QColor(255,255,0));
  brush.setStyle(Qt::SolidPattern);
  // entregando o pincel ao pintor
  p.setBrush(brush);

  p.drawRect(0,0,width(),height());
}














