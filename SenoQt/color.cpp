#include "color.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
Color::Color(QWidget *parent) :
    QWidget(parent)
{
  r=g=b=255;
}

void Color::paintEvent(QPaintEvent *event)
{
  QPainter p(this);
  QBrush brush;
  brush.setStyle(Qt::SolidPattern);
  brush.setColor(QColor(r,g,b));
  p.setBrush(brush);
  p.drawRect(0,0,width(), height());
}

void Color::setRGB(int _r, int _g, int _b)
{
  r=_r; g=_g; b=_b;
  repaint();
}


