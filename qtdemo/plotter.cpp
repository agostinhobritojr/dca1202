#include "plotter.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <cmath>

using namespace std;

Plotter::Plotter(QWidget *parent) :
  QWidget(parent){
  amp = 1.0;
  teta = 0.0;
  omega = 1;
  startTimer(10);
}

void Plotter::timerEvent(QTimerEvent *e){
  teta = teta + 0.01;
  repaint();
}

void Plotter::paintEvent(QPaintEvent *e){
  int x1, y1, x2, y2;

  // cria um objeto pintor
  QPainter p(this);

  // faz com que a linha seja desenhada
  // com tracos suaves
  p.setRenderHint(QPainter::Antialiasing);

  // cria um objeto de caneta
  QPen pen;
  // cria um objeto de pincel
  QBrush brush;
  // define a cor da caneta
  pen.setColor(QColor(255,0,0));
  pen.setWidth(2);

  // informa ao painter qual a caneta a ser
  // usada
  p.setPen(pen);

  // define a cor do pincel
  brush.setColor(QColor(255,255,0));
  brush.setStyle(Qt::SolidPattern);

  // informa oa painter qual o pincel a ser
  // usado
  p.setBrush(brush);
  p.drawRect(0,0,width(),height());
  // (x1,y1) -> (x2,y2)
  pen.setColor(QColor(0,0,255));
  p.setPen(pen);
  // desenha a linha do eixo de coordenadas
  p.drawLine(0,height()/2,width(),height()/2);

  x1 = 0;
  y1 = height()/2*(1- amp*sin(2*3.14*omega+teta));
  for(int i=1; i<width(); i++){
    x2 = i;
    y2 = height()/2*(1-amp*sin(2*3.14*omega*x2/width()+teta));
    p.drawLine(x1, y1, x2, y2);
    x1 = x2;
    y1 = y2;
  }
}








