#include "plotter.h"
#include <QBrush>
#include <QPen>
#include <QPainter>

Plotter::Plotter(QWidget *parent)
    : QWidget{parent}{

}

void Plotter::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    pen.setColor(QColor(255,0,0));

    brush.setColor(QColor(255,255,200));
    brush.setStyle(Qt::SolidPattern);

    painter.setPen(pen);
    painter.setBrush(brush);

    painter.drawRect(0,0, width()-1, height()-1);

    pen.setColor(QColor(0,0,255));

    painter.setPen(pen);
    painter.drawLine(0, height()/2, width(), height()/2);
}















