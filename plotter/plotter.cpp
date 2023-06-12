#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>

Plotter::Plotter(QWidget *parent)
    : QWidget{parent}
{

}

void Plotter::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QPen pen;
    QBrush brush;

    // cor da caneta
    pen.setColor(QColor(0,0,255));
    // largura do traco
    pen.setWidth(2);
    // entrega a caneta ao pintor
    painter.setPen(pen);

    // cor do pincel
    brush.setColor(QColor(255,255,100));
    // estilo de pintura (solido)
    brush.setStyle(Qt::SolidPattern);
    // entrega o pincel ao pintor
    painter.setBrush(brush);

    // desenha o retangulo
    painter.drawRect(0,0,width(), height());
}
