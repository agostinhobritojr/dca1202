#include "plotter.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <cmath>

using namespace std;

Plotter::Plotter(QWidget *parent) : QWidget(parent)
{
  amplitude = 0.5;
  frequencia = 2;
  teta = 1;
}

void Plotter::paintEvent(QPaintEvent *event){
  QPainter painter(this);
  QPen pen;
  QBrush brush;

  // o uso de Antialiasing reduz o
  // SERRILHAMENTO DAS LINHAS
  painter.setRenderHint(QPainter::Antialiasing);

  pen.setColor(QColor(255,0,0));
  brush.setColor(QColor(255,255,0));
  brush.setStyle(Qt::SolidPattern);

  painter.setPen(pen);
  painter.setBrush(brush);

  painter.drawRect(0,0,width()-2,height()-2);

  pen.setStyle(Qt::DashLine);
  painter.setPen(pen);

  painter.drawLine(0,height()/2,
                   width(), height()/2);

  int x1, y1, x2, y2;
  x1 = 0;
  y1 = height()/2-
      amplitude*height()/2*
      sin((2*M_PI)*frequencia*
          (double)x1/width()+teta);

  pen.setStyle(Qt::SolidLine);
  pen.setColor(QColor(0,0,255));
  pen.setWidth(1);
  painter.setPen(pen);

  for (int i=1; i<=width(); i++) {
    x2 = i;
    y2 = height()/2-
            amplitude*height()/2*
            sin((2*M_PI)*frequencia*
                (double)x2/width()+teta);
    painter.drawLine(x1,y1,x2,y2);
    x1 = x2;
    y1 = y2;
  }

}

void Plotter::mudaAmplitude(int valor){
  amplitude = valor/100.0;
  repaint();
}

void Plotter::mudaFrequencia(int valor)
{
  frequencia = valor*50/100.0;
  repaint();
}





