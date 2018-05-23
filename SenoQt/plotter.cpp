#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QColor>

Plotter::Plotter(QWidget *parent) : QWidget(parent)
{

}

void Plotter::paintEvent(QPaintEvent *event){
  QPainter painter(this);
  QBrush brush;
  QPen pen;

  // brush com a cor amarela com preenchimento
  // solido
  brush.setColor(QColor(255,255,100));
  brush.setStyle(Qt::SolidPattern);
  // informa ao painter qual o pincel atual
  painter.setBrush(brush);

  // pen com cor vermelha e dois pixels de largura
  pen.setColor(QColor(255,0,0));
  pen.setWidth(2);

  // informa ao painter qual o pen atual
  painter.setPen(pen);

  // desenha um retangulo tomando toda a area
  // do componente
  painter.drawRect(0,0,width(), height());
}








