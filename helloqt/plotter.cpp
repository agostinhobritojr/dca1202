#include "plotter.h"
#include <QPainter>
#include <QPen>
#include <QBrush>

Plotter::Plotter(QWidget *parent)
    : QWidget{parent}
{}

void Plotter::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QBrush brush;
    QPen pen;
    brush.setColor(QColor(255,255,200));
    brush.setStyle(Qt::SolidPattern);
    pen.setColor(Qt::red);
    pen.setWidth(2);
    painter.setBrush(brush);
    painter.setPen(pen);
    painter.drawRect(0,0,width(), height());
    pen.setColor(QColor(200,200,0));
    painter.setPen(pen);
    painter.drawLine(0,height()/2, width(), height()/2);


}




